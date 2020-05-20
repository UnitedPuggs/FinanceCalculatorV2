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
#include <QtWidgets/QDoubleSpinBox>
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
    QPushButton *editButton;
    QPushButton *deleteButton;
    QWidget *paycheckPage;
    QTableView *paycheckTable;
    QLineEdit *paycheckSearchLine;
    QLabel *paycheckSearchLabel;
    QPushButton *paycheckSearchButton;
    QLineEdit *pdateLine;
    QLabel *pdateLabel;
    QLabel *pamountLabel;
    QLineEdit *pamountLine;
    QLabel *pnoteLabel;
    QTextEdit *noteEdit;
    QLabel *spendLabel;
    QLabel *savingLabel;
    QDoubleSpinBox *spendingPercent;
    QDoubleSpinBox *savingPercent;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *purchasesPageButton;
    QPushButton *paychecksPageButton;
    QPushButton *pushButton;
    QLabel *currSpendingLabel;
    QLineEdit *spendingLine;
    QLabel *currSavingLabel;
    QLineEdit *savingsLine;
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
        stackedWidget->setGeometry(QRect(140, 50, 811, 521));
        stackedWidget->setMouseTracking(true);
        financePage = new QWidget();
        financePage->setObjectName(QString::fromUtf8("financePage"));
        financePage->setMouseTracking(true);
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
        editButton = new QPushButton(financePage);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(75, 320, 80, 21));
        deleteButton = new QPushButton(financePage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(75, 350, 80, 21));
        stackedWidget->addWidget(financePage);
        paycheckPage = new QWidget();
        paycheckPage->setObjectName(QString::fromUtf8("paycheckPage"));
        paycheckTable = new QTableView(paycheckPage);
        paycheckTable->setObjectName(QString::fromUtf8("paycheckTable"));
        paycheckTable->setGeometry(QRect(200, 40, 601, 431));
        paycheckSearchLine = new QLineEdit(paycheckPage);
        paycheckSearchLine->setObjectName(QString::fromUtf8("paycheckSearchLine"));
        paycheckSearchLine->setGeometry(QRect(260, 15, 131, 21));
        paycheckSearchLabel = new QLabel(paycheckPage);
        paycheckSearchLabel->setObjectName(QString::fromUtf8("paycheckSearchLabel"));
        paycheckSearchLabel->setGeometry(QRect(218, 18, 47, 13));
        paycheckSearchButton = new QPushButton(paycheckPage);
        paycheckSearchButton->setObjectName(QString::fromUtf8("paycheckSearchButton"));
        paycheckSearchButton->setGeometry(QRect(400, 15, 80, 21));
        pdateLine = new QLineEdit(paycheckPage);
        pdateLine->setObjectName(QString::fromUtf8("pdateLine"));
        pdateLine->setGeometry(QRect(40, 80, 113, 21));
        pdateLabel = new QLabel(paycheckPage);
        pdateLabel->setObjectName(QString::fromUtf8("pdateLabel"));
        pdateLabel->setGeometry(QRect(80, 60, 31, 16));
        pamountLabel = new QLabel(paycheckPage);
        pamountLabel->setObjectName(QString::fromUtf8("pamountLabel"));
        pamountLabel->setGeometry(QRect(50, 120, 91, 16));
        pamountLine = new QLineEdit(paycheckPage);
        pamountLine->setObjectName(QString::fromUtf8("pamountLine"));
        pamountLine->setGeometry(QRect(40, 140, 113, 21));
        pnoteLabel = new QLabel(paycheckPage);
        pnoteLabel->setObjectName(QString::fromUtf8("pnoteLabel"));
        pnoteLabel->setGeometry(QRect(80, 250, 31, 16));
        noteEdit = new QTextEdit(paycheckPage);
        noteEdit->setObjectName(QString::fromUtf8("noteEdit"));
        noteEdit->setGeometry(QRect(40, 270, 121, 91));
        spendLabel = new QLabel(paycheckPage);
        spendLabel->setObjectName(QString::fromUtf8("spendLabel"));
        spendLabel->setGeometry(QRect(40, 190, 61, 16));
        savingLabel = new QLabel(paycheckPage);
        savingLabel->setObjectName(QString::fromUtf8("savingLabel"));
        savingLabel->setGeometry(QRect(110, 190, 51, 16));
        spendingPercent = new QDoubleSpinBox(paycheckPage);
        spendingPercent->setObjectName(QString::fromUtf8("spendingPercent"));
        spendingPercent->setGeometry(QRect(40, 210, 51, 22));
        savingPercent = new QDoubleSpinBox(paycheckPage);
        savingPercent->setObjectName(QString::fromUtf8("savingPercent"));
        savingPercent->setGeometry(QRect(110, 210, 51, 22));
        pushButton_2 = new QPushButton(paycheckPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 370, 80, 21));
        pushButton_3 = new QPushButton(paycheckPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 400, 80, 21));
        pushButton_4 = new QPushButton(paycheckPage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(60, 430, 80, 21));
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
        currSpendingLabel = new QLabel(centralwidget);
        currSpendingLabel->setObjectName(QString::fromUtf8("currSpendingLabel"));
        currSpendingLabel->setGeometry(QRect(950, 110, 101, 20));
        spendingLine = new QLineEdit(centralwidget);
        spendingLine->setObjectName(QString::fromUtf8("spendingLine"));
        spendingLine->setGeometry(QRect(1050, 110, 113, 21));
        spendingLine->setReadOnly(true);
        currSavingLabel = new QLabel(centralwidget);
        currSavingLabel->setObjectName(QString::fromUtf8("currSavingLabel"));
        currSavingLabel->setGeometry(QRect(955, 140, 91, 20));
        savingsLine = new QLineEdit(centralwidget);
        savingsLine->setObjectName(QString::fromUtf8("savingsLine"));
        savingsLine->setGeometry(QRect(1050, 140, 113, 21));
        savingsLine->setReadOnly(true);
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
        QObject::connect(editButton, SIGNAL(clicked()), finance_page, SLOT(editPurchases()));
        QObject::connect(deleteButton, SIGNAL(clicked()), finance_page, SLOT(deletePurchases()));
        QObject::connect(financeTable, SIGNAL(clicked(QModelIndex)), finance_page, SLOT(contentClicked(QModelIndex)));
        QObject::connect(paycheckSearchLine, SIGNAL(textChanged(QString)), finance_page, SLOT(searchPaychecks()));
        QObject::connect(paycheckSearchButton, SIGNAL(clicked()), finance_page, SLOT(searchPaychecks()));
        QObject::connect(paycheckTable, SIGNAL(viewportEntered()), finance_page, SLOT(refreshPaychecks()));
        QObject::connect(spendingPercent, SIGNAL(valueChanged(double)), finance_page, SLOT(spendPercent()));
        QObject::connect(savingPercent, SIGNAL(valueChanged(double)), finance_page, SLOT(savePercent()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), finance_page, SLOT(submitPaycheck()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), finance_page, SLOT(editPaycheck()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), finance_page, SLOT(deletePaycheck()));
        QObject::connect(paycheckTable, SIGNAL(clicked(QModelIndex)), finance_page, SLOT(paychecksClicked(QModelIndex)));

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
        editButton->setText(QCoreApplication::translate("finance_page", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("finance_page", "Delete", nullptr));
        paycheckSearchLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a date...", nullptr));
        paycheckSearchLabel->setText(QCoreApplication::translate("finance_page", "Search:", nullptr));
        paycheckSearchButton->setText(QCoreApplication::translate("finance_page", "Search", nullptr));
        pdateLabel->setText(QCoreApplication::translate("finance_page", "Date", nullptr));
        pamountLabel->setText(QCoreApplication::translate("finance_page", "Paycheck Amount", nullptr));
        pnoteLabel->setText(QCoreApplication::translate("finance_page", "Note", nullptr));
        noteEdit->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a note...", nullptr));
        spendLabel->setText(QCoreApplication::translate("finance_page", "Spending %", nullptr));
        savingLabel->setText(QCoreApplication::translate("finance_page", "Saving %", nullptr));
        pushButton_2->setText(QCoreApplication::translate("finance_page", "Submit", nullptr));
        pushButton_3->setText(QCoreApplication::translate("finance_page", "Edit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("finance_page", "Delete", nullptr));
        purchasesPageButton->setText(QCoreApplication::translate("finance_page", "Purchases", nullptr));
        paychecksPageButton->setText(QCoreApplication::translate("finance_page", "Paychecks", nullptr));
        pushButton->setText(QCoreApplication::translate("finance_page", "Account Settings", nullptr));
        currSpendingLabel->setText(QCoreApplication::translate("finance_page", "Current Spending: $", nullptr));
        currSavingLabel->setText(QCoreApplication::translate("finance_page", "Current Savings: $", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finance_page: public Ui_finance_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_PAGE_H
