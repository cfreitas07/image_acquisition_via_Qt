#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

// Qt Camera
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QMediaDevices>
#include <QCameraDevice>
#include <QMediaCaptureSession>
#include <QVideoWidget>


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_start_Camera_clicked();
    void on_stop_Camera_clicked();

private:
    void start_Camera();
    void stop_Camera();

private:
    Ui::Widget *ui;
    QScopedPointer<QCamera> M_Camera;

};
#endif // WIDGET_H
