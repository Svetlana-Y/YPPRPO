/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenuContainer;
    QVBoxLayout *verticalLayout;
    QWidget *leftMenuSubContainer;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *menuBtn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *homeBtn;
    QPushButton *catalogBtn;
    QPushButton *featuresBtn;
    QSpacerItem *verticalSpacer;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *settingsBtn;
    QPushButton *infoBtn;
    QPushButton *helpBtn;
    QWidget *centerMenuContainer;
    QVBoxLayout *verticalLayout_5;
    QWidget *centerMenuSubContainer;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QWidget *mainBodyContainer;
    QVBoxLayout *verticalLayout_10;
    QWidget *headerContainer;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *mainBodyContent;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(726, 449);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	border:none;\n"
"	background-color: transparent;	\n"
"	background:  transparent;\n"
"	padding: 0;\n"
"	margin: 0;\n"
"	color: #fff;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-color: #1f232a;\n"
"}\n"
"\n"
"#leftMenuSubContainer{\n"
"	background-color: #16191d;\n"
"}\n"
"\n"
"leftMenuSubContainer QPushButton{\n"
"	text-aligh: left;\n"
"	padding: 5px 10px;\n"
"	border-top-left-radius: 10px;\n"
"	border-bottom-left-radius: 10px;\n"
"}\n"
"\n"
"#centerMenuSubContainer{\n"
"	background-color: #2c313c;\n"
"}\n"
"\n"
"#frame_4{\n"
"	background-color: #16191d;\n"
"	border-radius: 10px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 10, 5, 0);
        leftMenuContainer = new QWidget(centralwidget);
        leftMenuContainer->setObjectName(QString::fromUtf8("leftMenuContainer"));
        verticalLayout = new QVBoxLayout(leftMenuContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        leftMenuSubContainer = new QWidget(leftMenuContainer);
        leftMenuSubContainer->setObjectName(QString::fromUtf8("leftMenuSubContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftMenuSubContainer->sizePolicy().hasHeightForWidth());
        leftMenuSubContainer->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(leftMenuSubContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 0, 0, 0);
        frame = new QFrame(leftMenuSubContainer);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	width: 120px;\n"
"	height : 55px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        menuBtn = new QPushButton(frame);
        menuBtn->setObjectName(QString::fromUtf8("menuBtn"));
        menuBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #ffffff;\n"
"	height: 45px;\n"
"}\n"
"\n"
"QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/img/align-justify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuBtn->setIcon(icon);
        menuBtn->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(menuBtn, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignTop);

        frame_2 = new QFrame(leftMenuSubContainer);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	width: 115px;\n"
"	height : 50px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 10, 0, 10);
        homeBtn = new QPushButton(frame_2);
        homeBtn->setObjectName(QString::fromUtf8("homeBtn"));
        homeBtn->setStyleSheet(QString::fromUtf8("background-color: #1f232a;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/img/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        homeBtn->setIcon(icon1);
        homeBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(homeBtn, 0, Qt::AlignLeft);

        catalogBtn = new QPushButton(frame_2);
        catalogBtn->setObjectName(QString::fromUtf8("catalogBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(catalogBtn->sizePolicy().hasHeightForWidth());
        catalogBtn->setSizePolicy(sizePolicy1);
        catalogBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/img/book-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        catalogBtn->setIcon(icon2);
        catalogBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(catalogBtn, 0, Qt::AlignLeft);

        featuresBtn = new QPushButton(frame_2);
        featuresBtn->setObjectName(QString::fromUtf8("featuresBtn"));
        featuresBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/img/eye.svg"), QSize(), QIcon::Normal, QIcon::Off);
        featuresBtn->setIcon(icon3);
        featuresBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(featuresBtn, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(frame_2, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        frame_3 = new QFrame(leftMenuSubContainer);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setEnabled(true);
        frame_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	width: 115px;\n"
"	height : 50px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 10, 0, 10);
        settingsBtn = new QPushButton(frame_3);
        settingsBtn->setObjectName(QString::fromUtf8("settingsBtn"));
        settingsBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resource/img/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsBtn->setIcon(icon4);
        settingsBtn->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(settingsBtn, 0, Qt::AlignLeft);

        infoBtn = new QPushButton(frame_3);
        infoBtn->setObjectName(QString::fromUtf8("infoBtn"));
        infoBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/img/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        infoBtn->setIcon(icon5);
        infoBtn->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(infoBtn, 0, Qt::AlignLeft);

        helpBtn = new QPushButton(frame_3);
        helpBtn->setObjectName(QString::fromUtf8("helpBtn"));
        helpBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resource/img/help-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        helpBtn->setIcon(icon6);
        helpBtn->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(helpBtn, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(frame_3, 0, Qt::AlignBottom);


        verticalLayout->addWidget(leftMenuSubContainer, 0, Qt::AlignLeft);


        horizontalLayout->addWidget(leftMenuContainer, 0, Qt::AlignLeft);

        centerMenuContainer = new QWidget(centralwidget);
        centerMenuContainer->setObjectName(QString::fromUtf8("centerMenuContainer"));
        centerMenuContainer->setMinimumSize(QSize(200, 0));
        verticalLayout_5 = new QVBoxLayout(centerMenuContainer);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        centerMenuSubContainer = new QWidget(centerMenuContainer);
        centerMenuSubContainer->setObjectName(QString::fromUtf8("centerMenuSubContainer"));
        verticalLayout_6 = new QVBoxLayout(centerMenuSubContainer);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(centerMenuSubContainer);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy2);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resource/img/x-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButton, 0, Qt::AlignRight);


        verticalLayout_6->addWidget(frame_4, 0, Qt::AlignTop);

        stackedWidget = new QStackedWidget(centerMenuSubContainer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_7 = new QVBoxLayout(page);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(13);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_4);

        stackedWidget->addWidget(page_3);

        verticalLayout_6->addWidget(stackedWidget);


        verticalLayout_5->addWidget(centerMenuSubContainer);


        horizontalLayout->addWidget(centerMenuContainer, 0, Qt::AlignLeft);

        mainBodyContainer = new QWidget(centralwidget);
        mainBodyContainer->setObjectName(QString::fromUtf8("mainBodyContainer"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainBodyContainer->sizePolicy().hasHeightForWidth());
        mainBodyContainer->setSizePolicy(sizePolicy3);
        mainBodyContainer->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 0);"));
        verticalLayout_10 = new QVBoxLayout(mainBodyContainer);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        headerContainer = new QWidget(mainBodyContainer);
        headerContainer->setObjectName(QString::fromUtf8("headerContainer"));
        horizontalLayout_5 = new QHBoxLayout(headerContainer);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame_5 = new QFrame(headerContainer);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(30, 30));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/pngwing.com.png")));
        label_5->setScaledContents(true);

        horizontalLayout_7->addWidget(label_5);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);


        horizontalLayout_5->addWidget(frame_5);

        frame_6 = new QFrame(headerContainer);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, 0, 0);
        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resource/img/more-horizontal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon8);
        pushButton_6->setIconSize(QSize(24, 24));

        horizontalLayout_6->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(frame_6);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resource/img/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon9);
        pushButton_5->setIconSize(QSize(24, 24));

        horizontalLayout_6->addWidget(pushButton_5);


        horizontalLayout_5->addWidget(frame_6);

        frame_7 = new QFrame(headerContainer);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_2 = new QPushButton(frame_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resource/img/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon10);
        pushButton_2->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resource/img/square.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon11);
        pushButton_3->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frame_7);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resource/img/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon12);
        pushButton_4->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(pushButton_4);


        horizontalLayout_5->addWidget(frame_7);


        verticalLayout_10->addWidget(headerContainer, 0, Qt::AlignTop);

        mainBodyContent = new QWidget(mainBodyContainer);
        mainBodyContent->setObjectName(QString::fromUtf8("mainBodyContent"));

        verticalLayout_10->addWidget(mainBodyContent);


        horizontalLayout->addWidget(mainBodyContainer);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        menuBtn->setToolTip(QCoreApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        menuBtn->setText(QString());
#if QT_CONFIG(tooltip)
        homeBtn->setToolTip(QCoreApplication::translate("MainWindow", "Home", nullptr));
#endif // QT_CONFIG(tooltip)
        homeBtn->setText(QCoreApplication::translate("MainWindow", " Home", nullptr));
#if QT_CONFIG(tooltip)
        catalogBtn->setToolTip(QCoreApplication::translate("MainWindow", "Catalog", nullptr));
#endif // QT_CONFIG(tooltip)
        catalogBtn->setText(QCoreApplication::translate("MainWindow", " \320\241atalog", nullptr));
#if QT_CONFIG(tooltip)
        featuresBtn->setToolTip(QCoreApplication::translate("MainWindow", "Features", nullptr));
#endif // QT_CONFIG(tooltip)
        featuresBtn->setText(QCoreApplication::translate("MainWindow", "  Features", nullptr));
#if QT_CONFIG(tooltip)
        settingsBtn->setToolTip(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#endif // QT_CONFIG(tooltip)
        settingsBtn->setText(QCoreApplication::translate("MainWindow", " Settings", nullptr));
#if QT_CONFIG(tooltip)
        infoBtn->setToolTip(QCoreApplication::translate("MainWindow", "Information", nullptr));
#endif // QT_CONFIG(tooltip)
        infoBtn->setText(QCoreApplication::translate("MainWindow", "  Information", nullptr));
#if QT_CONFIG(tooltip)
        helpBtn->setToolTip(QCoreApplication::translate("MainWindow", "Help", nullptr));
#endif // QT_CONFIG(tooltip)
        helpBtn->setText(QCoreApplication::translate("MainWindow", "  Help", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "More Menu", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "More Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Modern App", nullptr));
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
