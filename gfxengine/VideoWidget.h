#ifndef VideoWidget_h
#define VideoWidget_h

#include <QWidget>
#include <QImage>
#include <QTimer>
#include <QDebug>
#include <QTime>
#include <QPointer>

#include <QMouseEvent>

#ifdef NO_OPENGL
#include <QWidget>
#else
#include <QGLWidget>
#endif

#include "VideoFrame.h"

class VideoSource;
class VideoFrame;
// class CameraServer;
class VideoWidget  :
	#ifdef NO_OPENGL
	public QWidget
	#else
	public QGLWidget
	#endif
	
{
	Q_OBJECT
	
	Q_PROPERTY(QColor videoBorderColor READ videoBorderColor WRITE setVideoBorderColor);
	
public:
	VideoWidget(QWidget *parent=0);
	~VideoWidget();

	void setVideoSource(VideoSource *);
	void disconnectVideoSource();
	int fps() { return m_forceFps; }
	QString overlayText() { return m_overlayText; }
	
	virtual QSize sizeHint () const;
	
	bool renderFps() { return m_renderFps; }
	int fadeLength() { return m_fadeLength; }
	
	VideoSource *overlaySource() { return m_overlaySource; }
	
	QColor videoBackgroundColor() { return m_videoBgColor; }
	QColor videoBorderColor() { return m_videoBorderColor; }
	
signals:
	void clicked();
	void pointClicked(QPoint);
	void sourceDiscarded(VideoSource*);
	
public slots:
	void fadeToBlack(bool flag);
	
	//void newFrame(QImage);
	
	void setOverlayText(const QString& text);
	void showOverlayText(bool flag=true);

	void setOpacity(qreal opacity);
	
	void setSourceRectAdjust( int dx1, int dy1, int dx2, int dy2 );
	void setTargetRectAdjust( int dx1, int dy1, int dx2, int dy2 );
	
	void setFps(int fps=-1);
	
	void setRenderFps(bool);
	
	void setFadeLength(int ms);
	
	void setOverlaySource(VideoSource*);
	void disconnectOverlaySource();
	
	void setVideoBackgroundColor(QColor);
	void setVideoBorderColor(QColor);

	
	
protected slots:
	void frameReady();
	void oldFrameReady();
	
	void callUpdate();
	void updateTimer();
	
	void sourceDestroyed();
	
	void fadeStart(bool switchThreads=true);
	void fadeAdvance();
	void fadeStop();
	void discardOldThread();
	
	void overlayFrameReady();
	
	
protected:
	void mouseReleaseEvent(QMouseEvent*); 
	void paintEvent(QPaintEvent*);
	void closeEvent(QCloseEvent*);
	void showEvent(QShowEvent*);
	void resizeEvent(QResizeEvent*);

protected:
	void connectVideoSource(VideoSource *source);
	void updateOverlay();
	void updateRects();
	void updateOverlaySourceRects();

	VideoSource * m_thread;
	VideoSource * m_oldThread;
	long m_frameCount;

	qreal  m_opacity;
	qreal  m_opacityInc;
	int    m_fadeLength;
	QTimer m_fadeTimer;
	
	VideoFramePtr m_frame;
	VideoFramePtr m_oldFrame;
	
	Qt::AspectRatioMode m_aspectRatioMode;
	int m_adjustDx1;
	int m_adjustDy1;
	int m_adjustDx2;
	int m_adjustDy2;
	
	int m_adjustTargetDx1;
	int m_adjustTargetDy1;
	int m_adjustTargetDx2;
	int m_adjustTargetDy2;


	QTime m_elapsedTime;
	
	bool m_showOverlayText;
	QString m_overlayText;

	QPixmap m_overlay;

	QRect m_targetRect;
	QRect m_sourceRect;
	QRect m_origSourceRect;
	
	QRect m_oldTargetRect;
	QRect m_oldSourceRect;
	
	QTimer m_paintTimer;
	
	int m_forceFps;
	
	bool m_renderFps;
	bool m_fadeToBlack;
	
	QTime m_fadeElapsed;
	double m_predictedFadeClock;
	double m_predictedClockInc;
	
	long m_latencyAccum;
	
	// If setVideoSource called while cross fade is active, the source is changed AFTER the fade is complete
	VideoSource * m_queuedSource;
	 
	VideoFramePtr m_overlayFrame;
	VideoSource * m_overlaySource;
	
	QRect m_overlayTargetRect;
	QRect m_overlaySourceRect;
	
	QColor m_videoBgColor;
	QColor m_videoBorderColor;
};



#endif //VideoWidget_h
