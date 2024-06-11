#include <QPixmap>

#include "big_image.h"
#include "ui_big_image.h"

Big_Image::Big_Image(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Big_Image)
{
    ui->setupUi(this);
}

Big_Image::~Big_Image()
{
    delete ui;
}

void Big_Image::setPath(const QString &path){
    QPixmap bkgnd(path);
    bkgnd = bkgnd.scaled(size(), Qt::IgnoreAspectRatio);
    QPalette p = palette(); //copy current, not create new
    p.setBrush(QPalette::Background, bkgnd);
    setPalette(p);
}
