#include "commoditywidget.h"
#include "ui_commoditywidget.h"
#include <QDateTime>

commoditywidget::commoditywidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::commoditywidget)
{
    ui->setupUi(this);
}

commoditywidget::~commoditywidget()
{
    delete ui;
}

//点击按钮获取当前时间写入文本
void commoditywidget::on_Button_click_clicked()
{
    QDateTime current_time = QDateTime::currentDateTime();
    QString nowtime = current_time.toString("yyyy-MM-dd hh:mm:ss");
    ui->lineEdit_time->setText(nowtime);
}

