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
    QPushButton *minimizeBtn;
    QPushButton *restoreBtn;
    QPushButton *closeBtn;
    QWidget *mainBodyContent;
    QHBoxLayout *horizontalLayout_8;
    QWidget *mainContentsContainer;
    QVBoxLayout *verticalLayout_15;
    QStackedWidget *stackedWidget_3;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_10;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_11;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_12;
    QWidget *rightMenuContainer;
    QVBoxLayout *verticalLayout_11;
    QWidget *rightMenuSubContainer;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QPushButton *pushButton_7;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_8;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1095, 521);
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
"#centerMenuSubContainer,  #rightMenuSubContainer{\n"
"	background-color: #2c313c;\n"
"}\n"
"\n"
"#frame_4, #frame_8{\n"
"	background-color: #16191d;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"#headerContainer{\n"
"	background-color: #2c313c;\n"
"}"));
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
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
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

        horizontalLayout_2->addWidget(menuBtn, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignmentFlag::AlignTop);

        frame_2 = new QFrame(leftMenuSubContainer);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	width: 115px;\n"
"	height : 50px;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 10, 0, 10);
        homeBtn = new QPushButton(frame_2);
        homeBtn->setObjectName(QString::fromUtf8("homeBtn"));
        homeBtn->setStyleSheet(QString::fromUtf8("background-color: #1f232a;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/img/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        homeBtn->setIcon(icon1);
        homeBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(homeBtn, 0, Qt::AlignmentFlag::AlignLeft);

        catalogBtn = new QPushButton(frame_2);
        catalogBtn->setObjectName(QString::fromUtf8("catalogBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(catalogBtn->sizePolicy().hasHeightForWidth());
        catalogBtn->setSizePolicy(sizePolicy2);
        catalogBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/img/book-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        catalogBtn->setIcon(icon2);
        catalogBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(catalogBtn, 0, Qt::AlignmentFlag::AlignLeft);

        featuresBtn = new QPushButton(frame_2);
        featuresBtn->setObjectName(QString::fromUtf8("featuresBtn"));
        featuresBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/img/eye.svg"), QSize(), QIcon::Normal, QIcon::Off);
        featuresBtn->setIcon(icon3);
        featuresBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(featuresBtn, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_2->addWidget(frame_2, 0, Qt::AlignmentFlag::AlignTop);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Policy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        frame_3 = new QFrame(leftMenuSubContainer);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setEnabled(true);
        frame_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	width: 115px;\n"
"	height : 50px;\n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
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

        verticalLayout_4->addWidget(settingsBtn, 0, Qt::AlignmentFlag::AlignLeft);

        infoBtn = new QPushButton(frame_3);
        infoBtn->setObjectName(QString::fromUtf8("infoBtn"));
        infoBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/img/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        infoBtn->setIcon(icon5);
        infoBtn->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(infoBtn, 0, Qt::AlignmentFlag::AlignLeft);

        helpBtn = new QPushButton(frame_3);
        helpBtn->setObjectName(QString::fromUtf8("helpBtn"));
        helpBtn->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resource/img/help-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        helpBtn->setIcon(icon6);
        helpBtn->setIconSize(QSize(24, 24));

        verticalLayout_4->addWidget(helpBtn, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_2->addWidget(frame_3, 0, Qt::AlignmentFlag::AlignBottom);


        verticalLayout->addWidget(leftMenuSubContainer, 0, Qt::AlignmentFlag::AlignLeft);


        horizontalLayout->addWidget(leftMenuContainer, 0, Qt::AlignmentFlag::AlignLeft);

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
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        frame_4 = new QFrame(centerMenuSubContainer);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy3);
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label);

        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton QToolTip {background-color: #1f232a;}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resource/img/x-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon7);
        pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButton, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout_6->addWidget(frame_4, 0, Qt::AlignmentFlag::AlignTop);

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
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_4);

        stackedWidget->addWidget(page_3);

        verticalLayout_6->addWidget(stackedWidget);


        verticalLayout_5->addWidget(centerMenuSubContainer);


        horizontalLayout->addWidget(centerMenuContainer, 0, Qt::AlignmentFlag::AlignLeft);

        mainBodyContainer = new QWidget(centralwidget);
        mainBodyContainer->setObjectName(QString::fromUtf8("mainBodyContainer"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mainBodyContainer->sizePolicy().hasHeightForWidth());
        mainBodyContainer->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setPointSize(9);
        mainBodyContainer->setFont(font1);
        mainBodyContainer->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_10 = new QVBoxLayout(mainBodyContainer);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        headerContainer = new QWidget(mainBodyContainer);
        headerContainer->setObjectName(QString::fromUtf8("headerContainer"));
        horizontalLayout_5 = new QHBoxLayout(headerContainer);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 3, 0, 3);
        frame_5 = new QFrame(headerContainer);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 3);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(35, 35));
        label_5->setFont(font1);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/pngwing.com.png")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_5->setMargin(0);

        horizontalLayout_7->addWidget(label_5);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        label_6->setFont(font2);

        horizontalLayout_7->addWidget(label_6);


        horizontalLayout_5->addWidget(frame_5, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        frame_6 = new QFrame(headerContainer);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
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


        horizontalLayout_5->addWidget(frame_6, 0, Qt::AlignmentFlag::AlignHCenter);

        frame_7 = new QFrame(headerContainer);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_7);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        minimizeBtn = new QPushButton(frame_7);
        minimizeBtn->setObjectName(QString::fromUtf8("minimizeBtn"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resource/img/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        minimizeBtn->setIcon(icon10);
        minimizeBtn->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(minimizeBtn);

        restoreBtn = new QPushButton(frame_7);
        restoreBtn->setObjectName(QString::fromUtf8("restoreBtn"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resource/img/square.svg"), QSize(), QIcon::Normal, QIcon::Off);
        restoreBtn->setIcon(icon11);
        restoreBtn->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(restoreBtn);

        closeBtn = new QPushButton(frame_7);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resource/img/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        closeBtn->setIcon(icon12);
        closeBtn->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(closeBtn);


        horizontalLayout_5->addWidget(frame_7, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout_10->addWidget(headerContainer, 0, Qt::AlignmentFlag::AlignTop);

        mainBodyContent = new QWidget(mainBodyContainer);
        mainBodyContent->setObjectName(QString::fromUtf8("mainBodyContent"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mainBodyContent->sizePolicy().hasHeightForWidth());
        mainBodyContent->setSizePolicy(sizePolicy5);
        horizontalLayout_8 = new QHBoxLayout(mainBodyContent);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mainContentsContainer = new QWidget(mainBodyContent);
        mainContentsContainer->setObjectName(QString::fromUtf8("mainContentsContainer"));
        verticalLayout_15 = new QVBoxLayout(mainContentsContainer);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        stackedWidget_3 = new QStackedWidget(mainContentsContainer);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_16 = new QVBoxLayout(page_6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_10 = new QLabel(page_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16->addWidget(label_10);

        stackedWidget_3->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_17 = new QVBoxLayout(page_7);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_11 = new QLabel(page_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(label_11);

        stackedWidget_3->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        verticalLayout_18 = new QVBoxLayout(page_8);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_12 = new QLabel(page_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18->addWidget(label_12);

        stackedWidget_3->addWidget(page_8);

        verticalLayout_15->addWidget(stackedWidget_3);


        horizontalLayout_8->addWidget(mainContentsContainer);

        rightMenuContainer = new QWidget(mainBodyContent);
        rightMenuContainer->setObjectName(QString::fromUtf8("rightMenuContainer"));
        rightMenuContainer->setMinimumSize(QSize(200, 0));
        verticalLayout_11 = new QVBoxLayout(rightMenuContainer);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        rightMenuSubContainer = new QWidget(rightMenuContainer);
        rightMenuSubContainer->setObjectName(QString::fromUtf8("rightMenuSubContainer"));
        rightMenuSubContainer->setMinimumSize(QSize(200, 0));
        verticalLayout_12 = new QVBoxLayout(rightMenuSubContainer);
        verticalLayout_12->setSpacing(5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(5, 5, 5, 5);
        frame_8 = new QFrame(rightMenuSubContainer);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(frame_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_7);

        pushButton_7 = new QPushButton(frame_8);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setIcon(icon7);
        pushButton_7->setIconSize(QSize(24, 24));

        horizontalLayout_9->addWidget(pushButton_7, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout_12->addWidget(frame_8);

        stackedWidget_2 = new QStackedWidget(rightMenuSubContainer);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_13 = new QVBoxLayout(page_4);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(label_8);

        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_14 = new QVBoxLayout(page_5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(label_9);

        stackedWidget_2->addWidget(page_5);

        verticalLayout_12->addWidget(stackedWidget_2);


        verticalLayout_11->addWidget(rightMenuSubContainer);


        horizontalLayout_8->addWidget(rightMenuContainer, 0, Qt::AlignmentFlag::AlignRight);


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
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "Close Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Modern App", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QCoreApplication::translate("MainWindow", "More", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWindow", "Profile", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QString());
#if QT_CONFIG(tooltip)
        minimizeBtn->setToolTip(QCoreApplication::translate("MainWindow", "Minimize window", nullptr));
#endif // QT_CONFIG(tooltip)
        minimizeBtn->setText(QString());
#if QT_CONFIG(tooltip)
        restoreBtn->setToolTip(QCoreApplication::translate("MainWindow", "Restore window", nullptr));
#endif // QT_CONFIG(tooltip)
        restoreBtn->setText(QString());
#if QT_CONFIG(tooltip)
        closeBtn->setToolTip(QCoreApplication::translate("MainWindow", "Close Window", nullptr));
#endif // QT_CONFIG(tooltip)
        closeBtn->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Catalog", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Features", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Right Menu", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_7->setToolTip(QCoreApplication::translate("MainWindow", "Close Menu", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "More...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
