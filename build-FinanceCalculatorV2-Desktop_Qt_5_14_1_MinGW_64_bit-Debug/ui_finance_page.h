/********************************************************************************
** Form generated from reading UI file 'finance_page.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCE_PAGE_H
#define UI_FINANCE_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finance_page
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *newsPage;
    QWidget *financePage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *finance_page)
    {
        if (finance_page->objectName().isEmpty())
            finance_page->setObjectName(QString::fromUtf8("finance_page"));
        finance_page->resize(800, 600);
        centralwidget = new QWidget(finance_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 50, 651, 521));
        newsPage = new QWidget();
        newsPage->setObjectName(QString::fromUtf8("newsPage"));
        stackedWidget->addWidget(newsPage);
        financePage = new QWidget();
        financePage->setObjectName(QString::fromUtf8("financePage"));
        stackedWidget->addWidget(financePage);
        finance_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(finance_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        finance_page->setMenuBar(menubar);
        statusbar = new QStatusBar(finance_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        finance_page->setStatusBar(statusbar);

        retranslateUi(finance_page);

        QMetaObject::connectSlotsByName(finance_page);
    } // setupUi

    void retranslateUi(QMainWindow *finance_page)
    {
        finance_page->setWindowTitle(QCoreApplication::translate("finance_page", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finance_page: public Ui_finance_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_PAGE_H
