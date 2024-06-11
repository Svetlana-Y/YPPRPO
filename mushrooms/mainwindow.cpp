#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QWidget>
#include <QTimer>
#include <QString>

#include "create_database.cpp"

QString language="Eng";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->centerMenuContainer->setVisible(false);

    timer = new QTimer(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::turnOffLeftWidgetButton(){
    ui->catalogBtn->setStyleSheet("background-color: #16191d;");
    ui->homeBtn->setStyleSheet("background-color: #16191d;");
    ui->featuresBtn->setStyleSheet("background-color: #16191d;");
    ui->infoBtn->setStyleSheet("background-color: #16191d;");
    ui->helpBtn->setStyleSheet("background-color: #16191d;");
    ui->settingsBtn->setStyleSheet("background-color: #16191d;");

}

void MainWindow::on_homeBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->homeBtn->setStyleSheet("background-color: #1f232a;");
    ui->centerWidget->setCurrentIndex(0);
}

void MainWindow::on_catalogBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->catalogBtn->setStyleSheet("background-color: #1f232a;");
    ui->centerWidget->setCurrentIndex(1);
}

void MainWindow::on_featuresBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->featuresBtn->setStyleSheet("background-color: #1f232a;");
    ui->centerWidget->setCurrentIndex(2);
}


void MainWindow::on_settingsBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->settingsBtn->setStyleSheet("background-color: #1f232a;");
    ui->menuWidget->setCurrentIndex(0);
}



void MainWindow::on_infoBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->infoBtn->setStyleSheet("background-color: #1f232a;");
    ui->menuWidget->setCurrentIndex(1);
}


void MainWindow::on_helpBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->helpBtn->setStyleSheet("background-color: #1f232a;");
    ui->menuWidget->setCurrentIndex(2);
}


void MainWindow::on_searchBtn_clicked()
{

    createDatabase("mashrooms2.db");
    insertData();

    Form *form = new Form;
    QString myMessage = "chaterelles";
    form->setMessage(myMessage);
    form->show();
}




void MainWindow::on_closeBtn_clicked()
{
    QMessageBox::StandardButton exit = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes | QMessageBox::No);
    if(exit == QMessageBox::Yes){
        QApplication::quit();
    }
}


void MainWindow::on_menuBtn_clicked()
{
    opacity = 100;

    QWidget *widget = ui->centerMenuContainer;

    connect(timer, &QTimer::timeout, [this, widget]() {
        if (widget->isVisible()) {
            if (opacity > 0) {
                widget->setVisible(opacity / 100.0);
                opacity -= 10;
            } else {
                widget->hide();
                timer->stop();
            }
        } else {
            if (opacity < 100) {
                widget->setVisible(opacity / 100.0);
                opacity += 10;
            } else {
                widget->show();
                timer->stop();
            }
        }
    });

    timer->start();
}




void MainWindow::on_setBtn_clicked()
{
    if(ui->russiaSettingBtn->isChecked()){
        language = "Rus";
        ui->label->setText("Меню");
        ui->label_2->setText("Параметры");
        ui->label_3->setText("Информация");
        ui->label_4->setText("Помощь");
        ui->label_7->setText("Меню");
        ui->label_8->setText("Профиль");
        ui->label_9->setText("Подробнее");
        ui->label_10->setText("Главная");
        ui->label_12->setText("Особенности");
        ui->label_13->setText("Изменить язык");

        ui->homeBtn->setText("Главная");
        ui->catalogBtn->setText("Каталог");
        ui->featuresBtn->setText("Особенности");
        ui->helpBtn->setText("Помощь");
        ui->infoBtn->setText("Информация");
        ui->settingsBtn->setText("Параметры");
        ui->searchBtn->setText("Поиск");
        ui->setBtn->setText("Установить");
        ui->russiaSettingBtn->setText("Русский");
        ui->englishSettingBtn->setText("Английский");
    }
    else{
        language = "Eng";
        ui->label->setText("Menu");
        ui->label_2->setText("Settings");
        ui->label_3->setText("Information");
        ui->label_4->setText("Help");
        ui->label_7->setText("Menu");
        ui->label_8->setText("Profile");
        ui->label_9->setText("More...");
        ui->label_10->setText("Home");
        ui->label_12->setText("Features");
        ui->label_13->setText("Change language");

        ui->homeBtn->setText("Home");
        ui->catalogBtn->setText("Catalog");
        ui->featuresBtn->setText("Features");
        ui->helpBtn->setText("Help");
        ui->infoBtn->setText("Information");
        ui->settingsBtn->setText("Information");
        ui->searchBtn->setText("Search");
        ui->setBtn->setText("Set");
        ui->russiaSettingBtn->setText("Russian");
        ui->englishSettingBtn->setText("English");
    }
}

