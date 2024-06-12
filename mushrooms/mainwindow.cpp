#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QWidget>
#include <QTimer>
#include <QString>
#include <QFileInfo>
#include <QtSql>
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>

#include "create_database.cpp"

QString photo1;
QString language="Eng";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->centerWidget->setCurrentIndex(0);
    ui->centerMenuContainer->setVisible(false);

    timer = new QTimer(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mashrooms2.db");

    if (!db.open()) {
        qDebug() << "Error: cannot open database.";
        return;
    }


    db.open();
    QSqlQuery query;
    query.prepare("SELECT * FROM Eng");

    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError();
        return;
    }


    while (query.next()){
        QString englishName = query.value(0).toString();
        QString name = query.value(1).toString();
        photo1 = QString("src/%1/%2.png").arg(englishName);
        listLabel.append(name);
        listImage.append(photo1);

    }

    ui->imageLabel1->setText(listLabel[0]);
    ui->imageLabel2->setText(listLabel[1]);
    ui->imageLabel3->setText(listLabel[2]);
    ui->imageLabel4->setText(listLabel[3]);
    ui->imageLabel5->setText(listLabel[4]);
    ui->imageLabel6->setText(listLabel[0]);
    ui->imageLabel7->setText(listLabel[1]);
    ui->imageLabel8->setText(listLabel[2]);
    ui->imageLabel9->setText(listLabel[3]);
    ui->imageLabel10->setText(listLabel[4]);
    ui->imageLabel11->setText(listLabel[0]);
    ui->imageLabel12->setText(listLabel[1]);
    ui->imageLabel13->setText(listLabel[2]);
    ui->imageLabel14->setText(listLabel[3]);
    ui->imageLabel15->setText(listLabel[4]);


    ui->image1Btn->setFixedSize(200, 200);
    ui->image1Btn->setStyleSheet("#image1Btn {border-image: url(:/src/src/black_milk_mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image2Btn->setFixedSize(200, 200);
    ui->image2Btn->setStyleSheet("#image2Btn {border-image: url(:/src/src/black_milk_mushrooms/2.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image3Btn->setFixedSize(200, 200);
    ui->image3Btn->setStyleSheet("#image3Btn {border-image: url(:/src/src/white_milk_mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image4Btn->setFixedSize(200, 200);
    ui->image4Btn->setStyleSheet("#image4Btn {border-image: url(:/src/src/buttermilk/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image5Btn->setFixedSize(200, 200);
    ui->image5Btn->setStyleSheet("#image5Btn {border-image: url(:/src/src/redheads/2.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");

    ui->image6Btn->setFixedSize(200, 200);
    ui->image6Btn->setStyleSheet("#image6Btn {border-image: url(:/src/src/black_milk_mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image7Btn->setFixedSize(200, 200);
    ui->image7Btn->setStyleSheet("#image7Btn {border-image: url(:/src/src/black_milk_mushrooms/2.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image8Btn->setFixedSize(200, 200);
    ui->image8Btn->setStyleSheet("#image8Btn {border-image: url(:/src/src/white_milk_mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image9Btn->setFixedSize(200, 200);
    ui->image9Btn->setStyleSheet("#image9Btn {border-image: url(:/src/src/buttermilk/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image10Btn->setFixedSize(200, 200);
    ui->image10Btn->setStyleSheet("#image10Btn {border-image: url(:/src/src/redheads/2.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");

    ui->image11Btn->setFixedSize(200, 200);
    ui->image11Btn->setStyleSheet("#image11Btn {border-image: url(:/src/src/black_milk_mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image12Btn->setFixedSize(200, 200);
    ui->image12Btn->setStyleSheet("#image12Btn {border-image: url(:/src/src/black_milk_mushrooms/2.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image13Btn->setFixedSize(200, 200);
    ui->image13Btn->setStyleSheet("#image13Btn {border-image: url(:/src/src/white_milk_mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image14Btn->setFixedSize(200, 200);
    ui->image14Btn->setStyleSheet("#image14Btn {border-image: url(:/src/src/buttermilk/1.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image15Btn->setFixedSize(200, 200);
    ui->image15Btn->setStyleSheet("#image15Btn {border-image: url(:/src/src/redheads/2.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");
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


void MainWindow::on_pushButton_5_clicked()
{
    ui->rightWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->rightWidget->setCurrentIndex(1);
}


void MainWindow::on_restoreBtn_clicked()
{
    if(!fullScreen){
        fullScreen = true;
        this->setWindowState(Qt::WindowFullScreen);}
    else{
        fullScreen = false;
        this->setWindowState(Qt::WindowState());
    }
}

