/********************************************************************************
** Form generated from reading UI file 'login_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_SCREEN_H
#define UI_LOGIN_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_screen
{
public:
    QWidget *centralwidget;
    QLabel *userLabal;
    QLabel *passLabel;
    QLineEdit *usernameLine;
    QLineEdit *passwordLine;
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
        userLabal = new QLabel(centralwidget);
        userLabal->setObjectName(QString::fromUtf8("userLabal"));
        userLabal->setGeometry(QRect(60, 70, 61, 16));
        passLabel = new QLabel(centralwidget);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));
        passLabel->setGeometry(QRect(60, 140, 51, 16));
        usernameLine = new QLineEdit(centralwidget);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));
        usernameLine->setGeometry(QRect(120, 70, 113, 21));
        passwordLine = new QLineEdit(centralwidget);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));
        passwordLine->setGeometry(QRect(120, 140, 113, 21));
        passwordLine->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(110, 200, 91, 31));
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
        passLabel->setText(QCoreApplication::translate("login_screen", "Password:", nullptr));
        usernameLine->setPlaceholderText(QCoreApplication::translate("login_screen", "Enter Username...", nullptr));
        passwordLine->setPlaceholderText(QCoreApplication::translate("login_screen", "Enter Password...", nullptr));
        loginButton->setText(QCoreApplication::translate("login_screen", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_screen: public Ui_login_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_SCREEN_H
