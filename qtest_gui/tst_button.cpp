#include "tst_button.h"
#include "commoditywidget.h"
#include "ui_commoditywidget.h"

MyTest::MyTest()
{

}

MyTest::~MyTest()
{

}

void MyTest::initTestCase()
{

}

void MyTest::cleanupTestCase()
{

}


void MyTest::testGui1()
{

    // Create a QWidget instance
    commoditywidget *widget;
    widget = new commoditywidget();


    // Set the window title
    widget->setWindowTitle("My Test");

    QTest::mouseClick(widget->ui->Button_click, Qt::LeftButton);

    //QTest::keyClicks(widget.ui->lineEdit_time, "5.0");
    QDateTime current_time = QDateTime::currentDateTime();
    QString nowtime = current_time.toString("yyyy-MM-dd hh:mm:ss");

    QCOMPARE(widget->ui->lineEdit_time->text(), nowtime);


//    // Simulate a button click
//    QTest::mouseClick(&button, Qt::LeftButton);

//    // Verify that the line edit text is selected
//    QVERIFY(lineEdit.selectedText() == "OK");
}

void MyTest::testGui2()
{

    // Create a QWidget instance
    commoditywidget *widget;
    widget = new commoditywidget();


    // Set the window title
    widget->setWindowTitle("My Test");

    QTest::mouseClick(widget->ui->Button_click, Qt::LeftButton);

    //QTest::keyClicks(widget.ui->lineEdit_time, "5.0");
    QDateTime current_time = QDateTime::currentDateTime();
    QString nowtime = current_time.toString("yyyy-MM-dd hh:mm:ss");

    QCOMPARE(widget->ui->lineEdit_time->text(), nowtime);


}
