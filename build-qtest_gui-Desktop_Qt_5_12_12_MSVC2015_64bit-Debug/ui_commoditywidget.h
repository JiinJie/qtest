/********************************************************************************
** Form generated from reading UI file 'commoditywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITYWIDGET_H
#define UI_COMMODITYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commoditywidget
{
public:
    QPushButton *Button_click;
    QLineEdit *lineEdit_time;
    QLabel *label_time;

    void setupUi(QWidget *commoditywidget)
    {
        if (commoditywidget->objectName().isEmpty())
            commoditywidget->setObjectName(QString::fromUtf8("commoditywidget"));
        commoditywidget->resize(400, 300);
        Button_click = new QPushButton(commoditywidget);
        Button_click->setObjectName(QString::fromUtf8("Button_click"));
        Button_click->setGeometry(QRect(150, 190, 93, 28));
        lineEdit_time = new QLineEdit(commoditywidget);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setGeometry(QRect(120, 140, 161, 21));
        label_time = new QLabel(commoditywidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(60, 140, 31, 16));

        retranslateUi(commoditywidget);

        QMetaObject::connectSlotsByName(commoditywidget);
    } // setupUi

    void retranslateUi(QWidget *commoditywidget)
    {
        commoditywidget->setWindowTitle(QApplication::translate("commoditywidget", "Form", nullptr));
        Button_click->setText(QApplication::translate("commoditywidget", "click", nullptr));
        lineEdit_time->setText(QString());
        label_time->setText(QApplication::translate("commoditywidget", "TIME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commoditywidget: public Ui_commoditywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITYWIDGET_H
