#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
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

void MainWindow::on_catalogBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->catalogBtn->setStyleSheet("background-color: #1f232a;");
}


void MainWindow::on_homeBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->homeBtn->setStyleSheet("background-color: #1f232a;");
}


void MainWindow::on_featuresBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->featuresBtn->setStyleSheet("background-color: #1f232a;");
}


void MainWindow::on_settingsBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->settingsBtn->setStyleSheet("background-color: #1f232a;");
}



void MainWindow::on_infoBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->infoBtn->setStyleSheet("background-color: #1f232a;");
}


void MainWindow::on_helpBtn_clicked()
{
    turnOffLeftWidgetButton();
    ui->helpBtn->setStyleSheet("background-color: #1f232a;");
}

