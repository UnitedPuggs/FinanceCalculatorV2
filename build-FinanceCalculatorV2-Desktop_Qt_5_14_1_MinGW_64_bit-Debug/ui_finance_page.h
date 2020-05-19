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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finance_page
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *financePage;
    QTableView *financeTable;
    QLabel *searchLabel;
    QLineEdit *searchLine;
    QPushButton *financeSearchButton;
    QLineEdit *dateLine;
    QLabel *dateLabel;
    QLabel *itemLabel;
    QLineEdit *itemLine;
    QLabel *amountLabel;
    QLineEdit *amountLine;
    QLabel *noteLabel;
    QPushButton *submitButton;
    QTextEdit *noteLine;
    QWidget *paycheckPage;
    QPushButton *purchasesPageButton;
    QPushButton *paychecksPageButton;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *finance_page)
    {
        if (finance_page->objectName().isEmpty())
            finance_page->setObjectName(QString::fromUtf8("finance_page"));
        finance_page->resize(1198, 593);
        finance_page->setMouseTracking(true);
        centralwidget = new QWidget(finance_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(140, 50, 821, 521));
        financePage = new QWidget();
        financePage->setObjectName(QString::fromUtf8("financePage"));
        financeTable = new QTableView(financePage);
        financeTable->setObjectName(QString::fromUtf8("financeTable"));
        financeTable->setGeometry(QRect(200, 40, 601, 431));
        searchLabel = new QLabel(financePage);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        searchLabel->setGeometry(QRect(218, 18, 47, 13));
        searchLine = new QLineEdit(financePage);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        searchLine->setGeometry(QRect(260, 15, 131, 21));
        financeSearchButton = new QPushButton(financePage);
        financeSearchButton->setObjectName(QString::fromUtf8("financeSearchButton"));
        financeSearchButton->setGeometry(QRect(400, 15, 80, 21));
        dateLine = new QLineEdit(financePage);
        dateLine->setObjectName(QString::fromUtf8("dateLine"));
        dateLine->setGeometry(QRect(60, 60, 113, 21));
        dateLabel = new QLabel(financePage);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        dateLabel->setGeometry(QRect(70, 40, 91, 16));
        itemLabel = new QLabel(financePage);
        itemLabel->setObjectName(QString::fromUtf8("itemLabel"));
        itemLabel->setGeometry(QRect(85, 90, 61, 16));
        itemLine = new QLineEdit(financePage);
        itemLine->setObjectName(QString::fromUtf8("itemLine"));
        itemLine->setGeometry(QRect(60, 110, 113, 21));
        amountLabel = new QLabel(financePage);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));
        amountLabel->setGeometry(QRect(80, 140, 71, 16));
        amountLine = new QLineEdit(financePage);
        amountLine->setObjectName(QString::fromUtf8("amountLine"));
        amountLine->setGeometry(QRect(60, 160, 113, 21));
        noteLabel = new QLabel(financePage);
        noteLabel->setObjectName(QString::fromUtf8("noteLabel"));
        noteLabel->setGeometry(QRect(100, 190, 31, 16));
        submitButton = new QPushButton(financePage);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(75, 290, 80, 21));
        noteLine = new QTextEdit(financePage);
        noteLine->setObjectName(QString::fromUtf8("noteLine"));
        noteLine->setGeometry(QRect(60, 210, 113, 70));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(noteLine->sizePolicy().hasHeightForWidth());
        noteLine->setSizePolicy(sizePolicy);
        noteLine->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(financePage);
        paycheckPage = new QWidget();
        paycheckPage->setObjectName(QString::fromUtf8("paycheckPage"));
        stackedWidget->addWidget(paycheckPage);
        purchasesPageButton = new QPushButton(centralwidget);
        purchasesPageButton->setObjectName(QString::fromUtf8("purchasesPageButton"));
        purchasesPageButton->setGeometry(QRect(50, 90, 81, 31));
        paychecksPageButton = new QPushButton(centralwidget);
        paychecksPageButton->setObjectName(QString::fromUtf8("paychecksPageButton"));
        paychecksPageButton->setGeometry(QRect(50, 130, 81, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 490, 101, 31));
        finance_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(finance_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1198, 20));
        finance_page->setMenuBar(menubar);
        statusbar = new QStatusBar(finance_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        finance_page->setStatusBar(statusbar);

        retranslateUi(finance_page);
        QObject::connect(financeSearchButton, SIGNAL(clicked()), finance_page, SLOT(searchPurchases()));
        QObject::connect(searchLine, SIGNAL(textChanged(QString)), finance_page, SLOT(searchPurchases()));
        QObject::connect(financeTable, SIGNAL(viewportEntered()), finance_page, SLOT(refreshPurchases()));
        QObject::connect(pushButton, SIGNAL(clicked()), finance_page, SLOT(accountSettings()));
        QObject::connect(paychecksPageButton, SIGNAL(clicked()), finance_page, SLOT(goToPaychecks()));
        QObject::connect(purchasesPageButton, SIGNAL(clicked()), finance_page, SLOT(goToPurchases()));
        QObject::connect(submitButton, SIGNAL(clicked()), finance_page, SLOT(addToPurchases()));

        QMetaObject::connectSlotsByName(finance_page);
    } // setupUi

    void retranslateUi(QMainWindow *finance_page)
    {
        finance_page->setWindowTitle(QCoreApplication::translate("finance_page", "Finances Page", nullptr));
        searchLabel->setText(QCoreApplication::translate("finance_page", "Search:", nullptr));
        searchLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter an item or date...", nullptr));
        financeSearchButton->setText(QCoreApplication::translate("finance_page", "Search", nullptr));
        dateLabel->setText(QCoreApplication::translate("finance_page", "Date of Purchase", nullptr));
        itemLabel->setText(QCoreApplication::translate("finance_page", "Item Name", nullptr));
        amountLabel->setText(QCoreApplication::translate("finance_page", "Amount Spent", nullptr));
        noteLabel->setText(QCoreApplication::translate("finance_page", "Notes", nullptr));
        submitButton->setText(QCoreApplication::translate("finance_page", "Submit", nullptr));
        noteLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter note here...", nullptr));
        purchasesPageButton->setText(QCoreApplication::translate("finance_page", "Purchases", nullptr));
        paychecksPageButton->setText(QCoreApplication::translate("finance_page", "Paychecks", nullptr));
        pushButton->setText(QCoreApplication::translate("finance_page", "Account Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finance_page: public Ui_finance_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_PAGE_H
