#include "widget.h"
#include "./ui_widget.h"

// Qt Camera
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QMediaDevices>
#include <QCameraDevice>
#include <QMediaCaptureSession>
#include <QVideoWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Iterate through available video inputs (cameras)
    for (const QCameraDevice &cameraDevice : QMediaDevices::videoInputs()) {
        qDebug() << "Available camera:" << cameraDevice.description();
    }

    //create a media capture session
    M_Camera.reset(new QCamera(QMediaDevices::defaultVideoInput()));

    // Create a media capture session
    QMediaCaptureSession *mediaCaptureSession = new QMediaCaptureSession;

    // Set the camera to the capture session
    mediaCaptureSession->setCamera(M_Camera.get());

    // Set the videoWidget (from your UI) as the video output
    mediaCaptureSession->setVideoOutput(ui->videoWidget);
}


Widget::~Widget()
{
    delete ui;
}

void Widget::start_Camera()
{
    M_Camera->start();
}

void Widget::stop_Camera()
{
    M_Camera->stop();
}


void Widget::on_start_Camera_clicked()
{
    start_Camera();
}


void Widget::on_stop_Camera_clicked()
{
    stop_Camera();
}

