#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QPixmap>
#include <QApplication>
#include <QPushButton>
#include <QString>
  #include <QIcon>



#include "form.h"
#include "big_image.h".h"
#include "ui_form.h"

QString photo;

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}


bool createConnection() {
    QSqlDatabase bd;
    bd = QSqlDatabase::addDatabase("QSQLITE");
    bd.setDatabaseName("./Mushrooms.db");
    if (bd.open()){
        qDebug("open");
    }
    else{
        qDebug("no open");
    }
    return true;
}

void Form::setMessage(const QString &message)
{
    this->message = message;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mashrooms2.db");

    if (!db.open()) {
        qDebug() << "Error: cannot open database.";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM Mashrooms WHERE English_Name = ?");
    query.addBindValue(message);

    if (!query.exec()) {
        qDebug() << "Error: cannot execute search query.";
        return;
    }

    if (query.next()) {
        QString englishName = query.value(0).toString();
        QString name = query.value(1).toString();
        bool edeble = query.value(2).toBool();
        QString description = query.value(3).toString();
        photo = query.value(4).toString();
        photo = QString("src/%1/%2.png").arg(englishName);
        QString recipe = query.value(5).toString();
        QString lieName = query.value(6).toString();
        QString lieDes = query.value(7).toString();
        QString liePhoto = query.value(8).toString();

        qDebug() << "Record found:";
        qDebug() << "English Name:" << englishName;
        qDebug() << "Name:" << name;
        qDebug() << "Edible:" << edeble;
        qDebug() << "Description:" << description;
        qDebug() << "Photo:" << photo;
        qDebug() << "Recipe:" << recipe;
        qDebug() << "Lie Name:" << lieName;
        qDebug() << "Lie Description:" << lieDes;
        qDebug() << "Lie Photo:" << liePhoto;
        ui->label->setText(name);
        if (edeble) ui->label_3->setText("Съедобный");
        else ui->label_3->setText("Не съедобный");

        ui->textBrowser->append(description);

        QPixmap pixmap(QString(photo).arg("1"));
        ui->label_2->setFixedSize(300, 300);
        QPixmap scaledPixmap = pixmap.scaled(ui->label_2->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label_2->setPixmap(scaledPixmap);
        ui->pushButton->setFixedSize(120, 120);
        ui->pushButton->setStyleSheet(QString("QPushButton {"
                                                "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                                "}").arg(photo).arg("2"));
        ui->pushButton_2->setFixedSize(120, 120);
        ui->pushButton_2->setStyleSheet(QString("QPushButton {"
                                                "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                                "}").arg(photo).arg("3"));
        ui->pushButton_3->setFixedSize(120, 120);
        ui->pushButton_3->setStyleSheet(QString("QPushButton {"
                                                "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                                "}").arg(photo).arg("4"));
        ui->pushButton_4->setFixedSize(120, 120);
        ui->pushButton_4->setStyleSheet(QString("QPushButton {"
                                                "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                                "}").arg(photo).arg("5"));

    } else {
        qDebug() << "No record found with the name" << message;
    }
}

void Form::on_pushButton_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("2"));
}


void Form::on_pushButton_2_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("3"));
}


void Form::on_pushButton_3_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("4"));
}


void Form::on_pushButton_4_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("5"));
}

