QT += testlib \
    widgets
QT += gui

QT += core

CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_start_gui.cpp \
    ccc.cpp \
    commoditywidget.cpp \
    main.cpp \
    tst_button.cpp \
    tst_ccc.cpp \
    tst_sample.cpp

HEADERS += \
    ccc.h \
    commoditywidget.h \
    tst_button.h \
    tst_ccc.h \
    tst_start_gui.h

FORMS += \
    commoditywidget.ui
