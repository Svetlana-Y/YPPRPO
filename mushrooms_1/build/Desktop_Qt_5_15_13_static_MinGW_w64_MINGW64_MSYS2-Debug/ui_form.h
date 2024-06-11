/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(639, 524);
        gridLayout_5 = new QGridLayout(Form);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea = new QScrollArea(Form);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 615, 500));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        gridLayout_2->addWidget(frame_3, 0, 0, 1, 1);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_7, 0, 4, 1, 1);

        pushButton_6 = new QPushButton(frame_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(frame_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_8, 0, 5, 1, 1);

        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(pushButton_5, 0, 3, 1, 1);


        gridLayout_2->addWidget(frame_2, 2, 0, 1, 2);

        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(pushButton_4, 2, 3, 1, 1);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(pushButton_2, 2, 1, 1, 1);


        gridLayout_2->addWidget(frame, 3, 0, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_2->addWidget(textBrowser, 1, 0, 1, 2);


        gridLayout->addWidget(widget, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Eatable", nullptr));
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QString());
        pushButton_5->setText(QString());
        pushButton->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QCoreApplication::translate("Form", "Image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
