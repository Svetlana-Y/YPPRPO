#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_catalogBtn_clicked();
    void on_homeBtn_clicked();

    void on_featuresBtn_clicked();

    void on_settingsBtn_clicked();

    void on_infoBtn_clicked();

    void on_helpBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
