#include "MouthyTest.h"
#include <QApplication>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	
	app.setApplicationName(argv[0]);
	app.setOrganizationName("Josiah Bryan");
	app.setOrganizationDomain("mybryanlife.com");
	
	MouthyTest *mw = new MouthyTest();
	mw->show();
	
	return app.exec();
}
