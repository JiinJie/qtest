#ifndef TST_BUTTON_H
#define TST_BUTTON_H


#include <QtTest>
#include <QCoreApplication>

// add necessary includes here


class MyTest : public QObject
{
    Q_OBJECT

public:
    MyTest();
    ~MyTest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testGui1();
    void testGui2();


};

#endif // TST_BUTTON_H
