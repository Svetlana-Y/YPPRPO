#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPropertyAnimation>
#include <QWidget>
#include <QTimer>
#include <QString>
#include <QPixmap>
#include <QFileInfo>
#include <QtSql>
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
#include <cstdio>

using namespace std;

#include "create_database.cpp"

QString photo1;
QString path = "";
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
    ui->image1Btn->setStyleSheet("#image1Btn {border-image: url(:/src/src/black-milk-mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image2Btn->setFixedSize(200, 200);
    ui->image2Btn->setStyleSheet("#image2Btn {border-image: url(:/src/src/black-milk-mushrooms/2.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image3Btn->setFixedSize(200, 200);
    ui->image3Btn->setStyleSheet("#image3Btn {border-image: url(:/src/src/white-milk-mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image4Btn->setFixedSize(200, 200);
    ui->image4Btn->setStyleSheet("#image4Btn {border-image: url(:/src/src/buttermilk/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image5Btn->setFixedSize(200, 200);
    ui->image5Btn->setStyleSheet("#image5Btn {border-image: url(:/src/src/redheads/2.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");

    ui->image6Btn->setFixedSize(200, 200);
    ui->image6Btn->setStyleSheet("#image6Btn {border-image: url(:/src/src/black-milk-mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image7Btn->setFixedSize(200, 200);
    ui->image7Btn->setStyleSheet("#image7Btn {border-image: url(:/src/src/black-milk-mushrooms/2.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image8Btn->setFixedSize(200, 200);
    ui->image8Btn->setStyleSheet("#image8Btn {border-image: url(:/src/src/white-milk-mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image9Btn->setFixedSize(200, 200);
    ui->image9Btn->setStyleSheet("#image9Btn {border-image: url(:/src/src/buttermilk/1.png) 0 0 0 0 stretch stretch;"
                                 "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image10Btn->setFixedSize(200, 200);
    ui->image10Btn->setStyleSheet("#image10Btn {border-image: url(:/src/src/redheads/2.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");

    ui->image11Btn->setFixedSize(200, 200);
    ui->image11Btn->setStyleSheet("#image11Btn {border-image: url(:/src/src/black-milk-mushrooms/1.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image12Btn->setFixedSize(200, 200);
    ui->image12Btn->setStyleSheet("#image12Btn {border-image: url(:/src/src/black-milk-mushrooms/2.png) 0 0 0 0 stretch stretch;"
                                  "border: 2px solid #1f232a; border-radius: 20px;}");
    ui->image13Btn->setFixedSize(200, 200);
    ui->image13Btn->setStyleSheet("#image13Btn {border-image: url(:/src/src/white-milk-mushrooms/1.png) 0 0 0 0 stretch stretch;"
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


    const char *cmd = (QString("cmd.exe /C \""
                            "myenv\\Scripts\\activate && "
                            "python ..\\..\\src\\detect.py --image_path %1"
                            "\"").arg(path)).toUtf8().data();

    FILE *fp = popen(cmd, "r");
    if (!fp)
    {
        cerr << "Не удалось запустить команду." << endl;
        return;
    }


    char line[10240];
    string output;
    while (fgets(line, sizeof(line), fp))
    {

        output += line;
    }
    pclose(fp);

    QString results_path1 = QString::fromStdString(output);
    qDebug() << results_path1;
    QStringList labels = (results_path1.split("640x640"))[1].split(",");
    qDebug() << labels;
    QStringList res = results_path1.split("predict");
    QString results_index = (res[1]).split("\u001B[0m\n")[0];
    QPixmap pixmap1(QString("runs\\detect\\predict%1\\%2").arg(results_index, path.split("/").last()));
    QPixmap scaledPixmap = pixmap1.scaled(ui->label_10->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label_10->setPixmap(scaledPixmap);


    // Создать виджет прокрутки
    QWidget* scrollWidget = new QWidget;
    ui->scrollArea_2->setWidget(scrollWidget);

    // Настроить макет виджета прокрутки
    QVBoxLayout* layout = new QVBoxLayout;
    scrollWidget->setLayout(layout);

    // Создать и добавить кнопки для каждого элемента списка
    int index = 0;
    for (QString item : labels) {
        qDebug() << item.split(" ");
        if (item.split(" ").length() != 3) break;
        QString one_mushroom = (item.split(" ")[2]);
        if (item.split(" ")[2] != "1")one_mushroom.chop(1);
        QPushButton* button = new QPushButton(one_mushroom);
        button->setObjectName(QString("button%1").arg(index++));
        layout->addWidget(button);
        connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);

    }

    createDatabase("mashrooms2.db");
    insertData();

}

void MainWindow::onButtonClicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        qDebug() << "Button clicked: " << button->text();
    }
    Form *form = new Form;
    form->setMessage(button->text());
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
        ui->pushButton_2->setText("Выбрать файл");


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
        ui->pushButton_2->setText("Select a file");
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


void MainWindow::on_pushButton_2_clicked()
{

    path = QFileDialog::getOpenFileName(this, "Выбрать файл", "..\\..\\",
                                        "All Files (*.*);; JPEG Image (*.jpg);; PNG Image (*.png);");
    ui->label_11->setText(path);
}

