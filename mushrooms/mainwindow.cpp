#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"

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

#include "_database.cpp"

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
    ui->label_14->setWordWrap(true);
    ui->label_15->setWordWrap(true);
    ui->label_16->setWordWrap(true);
    ui->label->setWordWrap(true);

    QString pathMainImage = ":/resource/img/icons8-mushroom-60.png";

    QPixmap pixmap1(pathMainImage);
    QPixmap scaledPixmap = pixmap1.scaled(ui->label_10->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label_10->setPixmap(scaledPixmap);

    timer = new QTimer(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../../mashrooms2.db");

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
        listEnglishName.append(englishName);
        listLabel.append(name);
        listImage.append(photo1);
        qDebug() << photo1;
    }

    ui->imageLabel1->setText(listLabel[0]);
    ui->imageLabel2->setText(listLabel[1]);
    ui->imageLabel3->setText(listLabel[2]);
    ui->imageLabel4->setText(listLabel[3]);
    ui->imageLabel5->setText(listLabel[4]);
    ui->imageLabel6->setText(listLabel[5]);
    ui->imageLabel7->setText(listLabel[6]);
    ui->imageLabel8->setText(listLabel[7]);
    ui->imageLabel9->setText(listLabel[8]);
    ui->imageLabel10->setText(listLabel[9]);
    ui->imageLabel11->setText(listLabel[10]);
    ui->imageLabel12->setText(listLabel[11]);
    ui->imageLabel13->setText(listLabel[12]);
    ui->imageLabel14->setText(listLabel[13]);
    ui->imageLabel15->setText(listLabel[14]);


    ui->image1Btn->setFixedSize(200, 200);
    ui->image1Btn->setStyleSheet(QString("#image1Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch; border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[0]).arg(1));
    ui->image2Btn->setFixedSize(200, 200);
    ui->image2Btn->setStyleSheet(QString("#image2Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[1]).arg(1));
    ui->image3Btn->setFixedSize(200, 200);
    ui->image3Btn->setStyleSheet(QString("#image3Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[2]).arg(2));
    ui->image4Btn->setFixedSize(200, 200);
    ui->image4Btn->setStyleSheet(QString("#image4Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[3]).arg(1));
    ui->image5Btn->setFixedSize(200, 200);
    ui->image5Btn->setStyleSheet(QString("#image5Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[4]).arg(1));
    ui->image6Btn->setFixedSize(200, 200);
    ui->image6Btn->setStyleSheet(QString("#image6Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[5]).arg(1));
    ui->image7Btn->setFixedSize(200, 200);
    ui->image7Btn->setStyleSheet(QString("#image7Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[6]).arg(1));
    ui->image8Btn->setFixedSize(200, 200);
    ui->image8Btn->setStyleSheet(QString("#image8Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[7]).arg(1));
    ui->image9Btn->setFixedSize(200, 200);
    ui->image9Btn->setStyleSheet(QString("#image9Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                         "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[8]).arg(1));
    ui->image10Btn->setFixedSize(200, 200);
    ui->image10Btn->setStyleSheet(QString("#image10Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                          "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[9]).arg(1));
    ui->image11Btn->setFixedSize(200, 200);
    ui->image11Btn->setStyleSheet(QString("#image11Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                          "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[10]).arg(1));
    ui->image12Btn->setFixedSize(200, 200);
    ui->image12Btn->setStyleSheet(QString("#image12Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                          "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[11]).arg(1));
    ui->image13Btn->setFixedSize(200, 200);
    ui->image13Btn->setStyleSheet(QString("#image13Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                          "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[12]).arg(1));
    ui->image14Btn->setFixedSize(200, 200);
    ui->image14Btn->setStyleSheet(QString("#image14Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                          "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[13]).arg(1));
    ui->image15Btn->setFixedSize(200, 200);
    ui->image15Btn->setStyleSheet(QString("#image15Btn {border-image: url(:/src/%1) 0 0 0 0 stretch stretch;"
                                          "border: 2px solid #1f232a; border-radius: 20px;}").arg(listImage[14]).arg(1));
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
    if (path != ""){
    const char *cmd = (QString("cmd.exe /C \""
                            "..\\..\\myenv\\Scripts\\activate && "
                            "python ..\\..\\src\\detect.py --image_path %1"
                            "\"").arg(path)).toUtf8().data();

    FILE *fp = popen(cmd, "r");
    if (!fp)
    {
        cerr << "Не удалось запустить команду." << endl;
        return;
    }


    char line[1024];
    string output;
    while (fgets(line, sizeof(line), fp))
    {

        output += line;
    }
    pclose(fp);

    QString results_path1 = QString::fromStdString(output);
    qDebug() << results_path1;
    QStringList labels = (results_path1.split("x640"))[1].split(",");
    qDebug() << labels;
    QString results_index;

    qDebug() << results_path1.split("\u001B[1m");
    results_index = results_path1.split("\u001B[1m")[1].split("\u001B[0m\n")[0];

    qDebug() << path.split("\\\\");
    if (path.split("/").length() > 1)
    {QPixmap pixmap1(QString("%1\\%2").arg(results_index, path.split("/").last()));
        QPixmap scaledPixmap = pixmap1.scaled(ui->label_10->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label_10->setPixmap(scaledPixmap);}
    else
    {QPixmap pixmap1(QString("%1\\%2").arg(results_index, path.split("\\\\").last()));
        QPixmap scaledPixmap = pixmap1.scaled(ui->label_10->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label_10->setPixmap(scaledPixmap);}


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
        if (item.split(" ")[1] != "1")one_mushroom.chop(1);
        qDebug() << item.split(" ");
        QPushButton* button = new QPushButton(one_mushroom);
        button->setObjectName(QString("button%1").arg(index++));
        layout->addWidget(button);
        connect(button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);

    }

    // createDatabase("mashrooms2.db");
    // insertData();
    }
    else{

        QMessageBox warning;
        warning.tr("Warning!!!");
        warning.setInformativeText("You didn't choose path\n");
                                 warning.setStandardButtons(QMessageBox::Ok);
                                 warning.setIconPixmap(QPixmap(":/resource/img/flyagaric.png"));
                                 warning.setDefaultButton(QMessageBox::Ok);
                                 warning.show();
                                 warning.exec();
    }
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
        ui->label_2->setText("Параметры");
        ui->label_3->setText("Инфо");
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
        ui->label_2->setText("Settings");
        ui->label_3->setText("Info");
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


void MainWindow::on_image1Btn_clicked()
{
   Form *form = new Form;
   form->setMessage(listEnglishName[0]);
   form->show();
}



void MainWindow::on_image2Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[1]);
    form->show();
}


void MainWindow::on_image3Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[2]);
    form->show();
}

void MainWindow::on_image4Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[3]);
    form->show();
}

void MainWindow::on_image5Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[4]);
    form->show();
}

void MainWindow::on_image6Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[5]);
    form->show();
}

void MainWindow::on_image7Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[6]);
    form->show();
}

void MainWindow::on_image8Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[7]);
    form->show();
}

void MainWindow::on_image9Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[8]);
    form->show();
}

void MainWindow::on_image10Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[9]);
    form->show();
}

void MainWindow::on_image11Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[10]);
    form->show();
}

void MainWindow::on_image12Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[11]);
    form->show();
}

void MainWindow::on_image13Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[12]);
    form->show();
}

void MainWindow::on_image14Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[13]);
    form->show();
}

void MainWindow::on_image15Btn_clicked()
{
    Form *form = new Form;
    form->setMessage(listEnglishName[14]);
    form->show();
}


