#ifndef WIDGETWINDOW_H
#define WIDGETWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetWindow; }
QT_END_NAMESPACE

class WidgetWindow : public QMainWindow
{
    Q_OBJECT

public:
    WidgetWindow(QWidget *parent = nullptr);
    ~WidgetWindow();

private slots:
    void on_closeBtm_clicked();

    void on_miniBtm_clicked();

private:
    Ui::WidgetWindow *ui;
};
#endif // WIDGETWINDOW_H
