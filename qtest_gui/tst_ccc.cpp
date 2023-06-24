
#include "tst_ccc.h"
#include "ccc.h"
#include <QTest>
#include <QList>

tst_ccc::tst_ccc()
{

}

tst_ccc::~tst_ccc()
{

}

void tst_ccc::initTestCase()
{

}

void tst_ccc::cleanupTestCase()
{

}

void tst_ccc::test_case1()
{
    ccc *myccc;
    myccc = new ccc();
    int test_sum = myccc->sum_ccc(5,1);
    int except_sum = 99;
    QCOMPARE(test_sum,except_sum);
}


void tst_ccc::test_case2()
{
    ccc * myccc;  //定义myaaa的类型，为aaa类
    myccc = new ccc();   //创建类型为aaa的myaaa 对象

    int test_sum = myccc->sum_ccc(5,2);
    int except_sum = 7;  //
    QCOMPARE(test_sum,except_sum);
    //delete  myccc;

}

void tst_ccc::test_case3()
{
    ccc * myccc;  //定义myaaa的类型，为aaa类
    myccc = new ccc();   //创建类型为aaa的myaaa 对象

    QFETCH(QList<int>,inputdata);
    QFETCH(int,exceptdata);
    qDebug() <<"inputdata is -->"<<inputdata;

    int x = inputdata[0];
    int y = inputdata[1];


    int test_sum = myccc->sum_ccc(x,y);
    int except_sum = exceptdata;  //

    QCOMPARE(test_sum,except_sum);
    //delete  myccc;

}


void tst_ccc::test_case3_data()
{
    QTest::addColumn<QList<int>>("inputdata");
    QTest::addColumn<int>("exceptdata");

    QList<int> input;
    int exceptdata;


    QTest::newRow("data1") <<QList<int>({1,2}) << 7;
    QTest::newRow("data2") <<QList<int>({3,9}) << 12;



}
