QT       += core gui opengl network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
include(D:/pcl1.10.1/pcl1.10.1.pri)
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AboutWin.cpp \
    FileIO.cpp \
    MeshProcessing.cpp \
    MyCloud.cpp \
    RadarIO.cpp \
    Tools.cpp \
    main.cpp \
    CloudViewer.cpp

HEADERS += \
    AboutWin.h \
    CloudViewer.h \
    FileIO.h \
    GBK.h \
    MeshProcessing.h \
    MyCloud.h \
    RadarIO.h \
    Tools.h

FORMS += \
    AboutWin.ui \
    CloudViewer.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources/cloudviewer.qrc \

