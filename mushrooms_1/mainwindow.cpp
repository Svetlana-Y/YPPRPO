#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCoreApplication>
#include <QtSql>
#include <QDebug>

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

void createDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mashrooms2.db");

    if (!db.open()) {
        qDebug() << "Error: cannot open database.";
        return;
    }

    QSqlQuery query;
    // Создание таблицы Mashrooms
    QString createTableQuery =
        "CREATE TABLE IF NOT EXISTS Mashrooms ("
        "English_Name TEXT, "
        "Name TEXT, "
        "Edeble BOOL, "
        "Description TEXT, "
        "Photo TEXT, "
        "Recipe TEXT, "
        "Lie_Name TEXT, "
        "Lie_Des TEXT, "
        "Lie_Photo TEXT"
        ");";

    if (!query.exec(createTableQuery)) {
        qDebug() << "Error: cannot create table 'Mashrooms'.";
        return;
    }

    qDebug() << "Database and table 'Mashrooms' created successfully.";
}

void insertData() {
    QSqlQuery query;
    query.prepare("INSERT INTO Mashrooms (English_Name, Name, Edeble, Description, Photo, Recipe, Lie_Name, Lie_Des, Lie_Photo) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue("chaterelles");
    query.addBindValue("Лисичка");
    query.addBindValue(true);
    query.addBindValue("Лисичка — гриб с самой яркой и запоминающейся внешностью. \
                        Шляпка и ножка составляют одно целое, цвет от светло-желтого "
                       "до желто-оранжевого цвета. Шляпка вогнутая, воронкообразной формы, "
                       "с волнистыми краями, от 2 до 12 см. Ножка плотная и гладкая, длиной "
                       "от 4 до 7 см. Мякоть плотно-мясистая с кисловатым вкусом и "
                       "слабовыраженным ароматом сушеных фруктов. Сырая мякоть гриба "
                       "немного горчит, но при отваривании горчинка исчезает. В отличие "
                       "от других грибов в лисичках никогда нет червей. Эти грибы содержат "
                       "хиноманнозу, которая убивает членистоногих и глистов. Они встречаются "
                       "в хвойных и лиственных лесах умеренного климата, растут большими группами, "
                       "поэтому их легко находят даже начинающие грибники. Лисички едят в любом виде, "
                       "они хорошо хранятся.");
    query.addBindValue("src/chaterelles/%1.png");
    query.addBindValue("Fried champignons recipe.");
    query.addBindValue("False champignon");
    query.addBindValue("Not edible, white gills.");
    query.addBindValue("path/to/false-photo.jpg");

    if (!query.exec()) {
        qDebug() << "Error: cannot insert data.";
        return;
    }

    qDebug() << "Data inserted successfully.";
}


void MainWindow::on_pushButton_clicked()
{
    createDatabase();
    insertData();

    Form *form = new Form;
    QString myMessage = "chaterelles";
    form->setMessage(myMessage);
    form->show();

}

