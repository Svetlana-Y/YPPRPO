#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <form.h>
#include <big_image.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void turnOffLeftWidgetButton();

    bool visibleCenterMenuContainer = false;

    int opacity;


private slots:
    void on_catalogBtn_clicked();
    void on_homeBtn_clicked();

    void on_featuresBtn_clicked();

    void on_settingsBtn_clicked();

    void on_infoBtn_clicked();

    void on_helpBtn_clicked();

    void on_searchBtn_clicked();

    void on_closeBtn_clicked();

    void on_menuBtn_clicked();

    void on_setBtn_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;

};
#endif // MAINWINDOW_H
