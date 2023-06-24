#ifndef TST_CCC_H
#define TST_CCC_H


//class tst_ccc
//{
//public:
//    tst_ccc();
//};


#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class tst_ccc : public QObject
{
    Q_OBJECT

public:
    tst_ccc();
    ~tst_ccc();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case3_data();

};

#endif // TST_CCC_H
