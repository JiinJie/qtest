#ifndef TST_START_GUI_H
#define TST_START_GUI_H

#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class start_gui : public QObject
{
    Q_OBJECT

public:
    start_gui();
    ~start_gui();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};


#endif // TST_START_GUI_H
