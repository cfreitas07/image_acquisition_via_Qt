/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVideoWidget *videoWidget;
    QPushButton *start_Camera;
    QPushButton *stop_Camera;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(898, 722);
        videoWidget = new QVideoWidget(Widget);
        videoWidget->setObjectName("videoWidget");
        videoWidget->setGeometry(QRect(120, 170, 611, 471));
        start_Camera = new QPushButton(Widget);
        start_Camera->setObjectName("start_Camera");
        start_Camera->setGeometry(QRect(110, 90, 231, 51));
        stop_Camera = new QPushButton(Widget);
        stop_Camera->setObjectName("stop_Camera");
        stop_Camera->setGeometry(QRect(520, 90, 221, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        start_Camera->setText(QCoreApplication::translate("Widget", "Start Camera", nullptr));
        stop_Camera->setText(QCoreApplication::translate("Widget", "Stop Camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
