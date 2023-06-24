#ifndef COMMODITYWIDGET_H
#define COMMODITYWIDGET_H

#include <QWidget>


namespace Ui {
class commoditywidget;
}

class commoditywidget : public QWidget
{
    Q_OBJECT

public:
    explicit commoditywidget(QWidget *parent = nullptr);
    ~commoditywidget();

private slots:
    void on_Button_click_clicked();

//测试暂时将ui的private改为public
public:
    Ui::commoditywidget *ui;
};

#endif // COMMODITYWIDGET_H
