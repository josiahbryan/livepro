#############################################################################
# Makefile for building: curvewarp
# Generated by qmake (2.01a) (Qt 4.6.2) on: Sun Jan 1 16:37:43 2012
# Project:  curvewarp.pro
# Template: app
# Command: /opt/qtsdk-2010.02/qt/bin/qmake -unix -o Makefile curvewarp.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DOPENCV_ENABLED -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../../qtsdk-2010.02/qt/mkspecs/linux-g++ -I. -I../../../qtsdk-2010.02/qt/include/QtCore -I../../../qtsdk-2010.02/qt/include/QtGui -I../../../qtsdk-2010.02/qt/include -I. -I../../../OpenCV-2.1.0/include/opencv -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/opt/qtsdk-2010.02/qt/lib
LIBS          = $(SUBLIBS)  -L/opt/qtsdk-2010.02/qt/lib -L/usr/local/lib -lcv -lcxcore -lhighgui -lQtGui -L/opt/qtsdk-2010.02/qt/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /opt/qtsdk-2010.02/qt/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = WarpTest1.cpp 
OBJECTS       = WarpTest1.o
DIST          = ../../../qtsdk-2010.02/qt/mkspecs/common/g++.conf \
		../../../qtsdk-2010.02/qt/mkspecs/common/unix.conf \
		../../../qtsdk-2010.02/qt/mkspecs/common/linux.conf \
		../../../qtsdk-2010.02/qt/mkspecs/qconfig.pri \
		../../../qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/qt_config.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/default_pre.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/release.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/default_post.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/warn_on.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/qt.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/moc.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/resources.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/uic.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/yacc.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/lex.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf \
		curvewarp.pro
QMAKE_TARGET  = curvewarp
DESTDIR       = 
TARGET        = curvewarp

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: curvewarp.pro  ../../../qtsdk-2010.02/qt/mkspecs/linux-g++/qmake.conf ../../../qtsdk-2010.02/qt/mkspecs/common/g++.conf \
		../../../qtsdk-2010.02/qt/mkspecs/common/unix.conf \
		../../../qtsdk-2010.02/qt/mkspecs/common/linux.conf \
		../../../qtsdk-2010.02/qt/mkspecs/qconfig.pri \
		../../../qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/qt_config.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/default_pre.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/release.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/default_post.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/warn_on.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/qt.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/moc.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/resources.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/uic.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/yacc.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/lex.prf \
		../../../qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf \
		/opt/qtsdk-2010.02/qt/lib/libQtGui.prl \
		/opt/qtsdk-2010.02/qt/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile curvewarp.pro
../../../qtsdk-2010.02/qt/mkspecs/common/g++.conf:
../../../qtsdk-2010.02/qt/mkspecs/common/unix.conf:
../../../qtsdk-2010.02/qt/mkspecs/common/linux.conf:
../../../qtsdk-2010.02/qt/mkspecs/qconfig.pri:
../../../qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/qt_config.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/default_pre.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/release.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/default_post.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/warn_on.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/qt.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/moc.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/resources.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/uic.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/yacc.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/lex.prf:
../../../qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf:
/opt/qtsdk-2010.02/qt/lib/libQtGui.prl:
/opt/qtsdk-2010.02/qt/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile curvewarp.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/curvewarp1.0.0 || $(MKDIR) .tmp/curvewarp1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/curvewarp1.0.0/ && $(COPY_FILE) --parents WarpTest1.cpp .tmp/curvewarp1.0.0/ && (cd `dirname .tmp/curvewarp1.0.0` && $(TAR) curvewarp1.0.0.tar curvewarp1.0.0 && $(COMPRESS) curvewarp1.0.0.tar) && $(MOVE) `dirname .tmp/curvewarp1.0.0`/curvewarp1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/curvewarp1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

WarpTest1.o: WarpTest1.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o WarpTest1.o WarpTest1.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

