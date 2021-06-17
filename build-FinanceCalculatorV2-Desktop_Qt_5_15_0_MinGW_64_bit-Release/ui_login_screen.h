/********************************************************************************
** Form generated from reading UI file 'login_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_SCREEN_H
#define UI_LOGIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_screen
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *loginvert;
    QVBoxLayout *uservert;
    QHBoxLayout *horizontalLayout;
    QLabel *userLabal;
    QLineEdit *usernameLine;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *passvert;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passLabel;
    QLineEdit *passwordLine;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login_screen)
    {
        if (login_screen->objectName().isEmpty())
            login_screen->setObjectName(QString::fromUtf8("login_screen"));
        login_screen->resize(345, 309);
        centralwidget = new QWidget(login_screen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(50, 20, 241, 191));
        loginvert = new QVBoxLayout(verticalLayoutWidget_3);
        loginvert->setObjectName(QString::fromUtf8("loginvert"));
        loginvert->setContentsMargins(0, 0, 0, 0);
        uservert = new QVBoxLayout();
        uservert->setObjectName(QString::fromUtf8("uservert"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        userLabal = new QLabel(verticalLayoutWidget_3);
        userLabal->setObjectName(QString::fromUtf8("userLabal"));

        horizontalLayout->addWidget(userLabal);

        usernameLine = new QLineEdit(verticalLayoutWidget_3);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));

        horizontalLayout->addWidget(usernameLine);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        uservert->addLayout(horizontalLayout);


        loginvert->addLayout(uservert);

        passvert = new QVBoxLayout();
        passvert->setObjectName(QString::fromUtf8("passvert"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        passLabel = new QLabel(verticalLayoutWidget_3);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));

        horizontalLayout_2->addWidget(passLabel);

        passwordLine = new QLineEdit(verticalLayoutWidget_3);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(passwordLine->sizePolicy().hasHeightForWidth());
        passwordLine->setSizePolicy(sizePolicy);
        passwordLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLine);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        passvert->addLayout(horizontalLayout_2);

        loginButton = new QPushButton(verticalLayoutWidget_3);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);

        passvert->addWidget(loginButton, 0, Qt::AlignHCenter);


        loginvert->addLayout(passvert);

        login_screen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login_screen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 345, 20));
        login_screen->setMenuBar(menubar);
        statusbar = new QStatusBar(login_screen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login_screen->setStatusBar(statusbar);

        retranslateUi(login_screen);
        QObject::connect(passwordLine, SIGNAL(returnPressed()), loginButton, SLOT(click()));
        QObject::connect(loginButton, SIGNAL(clicked()), login_screen, SLOT(login()));

        QMetaObject::connectSlotsByName(login_screen);
    } // setupUi

    void retranslateUi(QMainWindow *login_screen)
    {
        login_screen->setWindowTitle(QCoreApplication::translate("login_screen", "Login Screen", nullptr));
        userLabal->setText(QCoreApplication::translate("login_screen", "Username:", nullptr));
        usernameLine->setPlaceholderText(QCoreApplication::translate("login_screen", "Enter Username...", nullptr));
        passLabel->setText(QCoreApplication::translate("login_screen", "Password:", nullptr));
        passwordLine->setPlaceholderText(QCoreApplication::translate("login_screen", "Enter Password...", nullptr));
        loginButton->setText(QCoreApplication::translate("login_screen", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_screen: public Ui_login_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_SCREEN_H
