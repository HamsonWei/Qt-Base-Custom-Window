#include "widgetwindow.h"
#include "ui_widgetwindow.h"

WidgetWindow::WidgetWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WidgetWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
}

WidgetWindow::~WidgetWindow()
{
    delete ui;
}


void WidgetWindow::on_closeBtm_clicked()
{
    this->close();
}

void WidgetWindow::on_miniBtm_clicked()
{
    this->showMinimized();
}
