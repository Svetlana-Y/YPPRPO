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

extern QString language;

QString photo;

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    setStyleSheet("*{border:none;background-color: #1f232a;padding: 0;margin: 0;color: #fff;}");
}

Form::~Form()
{
    delete ui;
}

void Form::setMessage(const QString &message)
{
    this->message = message;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../../mashrooms2.db");

    if (!db.open()) {
        qDebug() << "Error: cannot open database.";
        return;
    }

    QSqlQuery query;
    query.prepare(QString("SELECT * FROM %1 WHERE English_Name = ?").arg(language));
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
        QString description2 = query.value(4).toString();
        QString lieName = query.value(5).toString();
        bool lieEdeble = query.value(6).toBool();
        QString lieDes = query.value(7).toString();
        photo = QString(":/src/src/%1/%2.png").arg(englishName);

        qDebug() << "Record found:";
        qDebug() << "English Name:" << englishName;
        qDebug() << "Name:" << name;
        qDebug() << "Edible:" << edeble;
        qDebug() << "Description:" << description;
        qDebug() << "Photo:" << photo;
        qDebug() << "Lie Name:" << lieName;
        qDebug() << "Lie Edeble:" << lieEdeble;
        qDebug() << "Lie Description:" << lieDes;
        ui->label->setText(name);
        ui->label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->label->setWordWrap(true);
        ui->label->setStyleSheet("font: 700 18pt \"Segoe UI\";");
        if(language == "Rus"){
            if (edeble) ui->label_3->setText("Съедобный");
            else ui->label_3->setText("Не съедобный");
            if (lieEdeble) ui->label_7->setText("Съедобный");
            else ui->label_7->setText("Не съедобный");}
        else{
            if (edeble) ui->label_3->setText("Edible");
            else ui->label_3->setText("Inedible");
            if (lieEdeble) ui->label_7->setText("Edible");
            else ui->label_7->setText("Inedible");}
        ui->label_3->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->label_7->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);


        ui->label_3->setStyleSheet("font: italic 14pt \"Segoe UI\";");
        ui->label_7->setStyleSheet("font: italic 14pt \"Segoe UI\";");
        ui->label_4->setText(lieName);
        ui->label_4->setStyleSheet("font: 700 18pt \"Segoe UI\";");
        ui->label_4->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

        ui->label_5->setText(lieDes);
        ui->label_5->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->label_5->setWordWrap(true);
        ui->label_5->setStyleSheet("font: 12pt \"Segoe UI\";");


        ui->label_6->setText(description);
        ui->label_6->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->label_6->setWordWrap(true);
        ui->label_6->setStyleSheet("font: 12pt \"Segoe UI\";");

        ui->label_8->setText(description2);
        ui->label_8->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        ui->label_8->setWordWrap(true);
        ui->label_8->setStyleSheet("font: 10pt \"Segoe UI\";");

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
        ui->pushButton_5->setFixedSize(120, 120);
        ui->pushButton_5->setStyleSheet(QString("QPushButton {"
                                              "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                              "}").arg(photo).arg("6"));
        ui->pushButton_6->setFixedSize(120, 120);
        ui->pushButton_6->setStyleSheet(QString("QPushButton {"
                                                "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                                "}").arg(photo).arg("7"));
        ui->pushButton_7->setFixedSize(120, 120);
        ui->pushButton_7->setStyleSheet(QString("QPushButton {"
                                                "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                                "}").arg(photo).arg("8"));
        ui->pushButton_8->setFixedSize(120, 120);
        ui->pushButton_8->setStyleSheet(QString("QPushButton {"
                                                "border-image: url(%1) 0 0 0 0 stretch stretch;"
                                                "}").arg(photo).arg("9"));

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


void Form::on_pushButton_6_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("7"));
}


void Form::on_pushButton_5_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("6"));
}


void Form::on_pushButton_7_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("8"));
}


void Form::on_pushButton_8_clicked()
{
    Big_Image *big_image = new Big_Image;
    big_image->show();
    big_image->setPath(QString(photo).arg("9"));
}

