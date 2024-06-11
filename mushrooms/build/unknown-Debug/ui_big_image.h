/********************************************************************************
** Form generated from reading UI file 'big_image.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIG_IMAGE_H
#define UI_BIG_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Big_Image
{
public:

    void setupUi(QWidget *Big_Image)
    {
        if (Big_Image->objectName().isEmpty())
            Big_Image->setObjectName(QString::fromUtf8("Big_Image"));
        Big_Image->resize(400, 364);

        retranslateUi(Big_Image);

        QMetaObject::connectSlotsByName(Big_Image);
    } // setupUi

    void retranslateUi(QWidget *Big_Image)
    {
        Big_Image->setWindowTitle(QCoreApplication::translate("Big_Image", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Big_Image: public Ui_Big_Image {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIG_IMAGE_H
