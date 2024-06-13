#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
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

    bool visibleCenterMenuContainer = false, fullScreen = false;

    int opacity;

    QSqlDatabase db;

    QList <QString> listLabel;
    QList <QString> listImage;
    QList <QString> listEnglishName;


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

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_restoreBtn_clicked();

    void onButtonClicked();

    void on_pushButton_2_clicked();

    void on_image1Btn_clicked();

    void on_image2Btn_clicked();

    void on_image3Btn_clicked();

    void on_image12Btn_clicked();


    void on_image11Btn_clicked();

    void on_image10Btn_clicked();

    void on_image15Btn_clicked();

    void on_image14Btn_clicked();

    void on_image13Btn_clicked();

    void on_image4Btn_clicked();

    void on_image5Btn_clicked();

    void on_image6Btn_clicked();

    void on_image7Btn_clicked();

    void on_image8Btn_clicked();

    void on_image9Btn_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;

};
#endif // MAINWINDOW_H
