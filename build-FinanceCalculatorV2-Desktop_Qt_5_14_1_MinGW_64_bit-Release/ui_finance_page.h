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
    QPushButton *submitPaycheck;
    QPushButton *editPaycheck;
    QPushButton *deletePaycheck;
    QWidget *earningsPage;
    QTableView *earningsTable;
    QLabel *edateLabel;
    QLineEdit *edateLine;
    QLabel *espendLabel;
    QLineEdit *espendLine;
    QLabel *esaveLabel;
    QLineEdit *esaveLine;
    QLabel *esearchLabel;
    QLineEdit *esearchLine;
    QPushButton *esearchButton;
    QPushButton *esubmitButton;
    QPushButton *earningEditButton;
    QPushButton *edeleteButton;
    QPushButton *purchasesPageButton;
    QPushButton *paychecksPageButton;
    QPushButton *accountSettings;
    QLabel *currSpendingLabel;
    QLineEdit *spendingLine;
    QLabel *currSavingLabel;
    QLineEdit *savingsLine;
    QPushButton *earningsPageButton;
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
        submitPaycheck = new QPushButton(paycheckPage);
        submitPaycheck->setObjectName(QString::fromUtf8("submitPaycheck"));
        submitPaycheck->setGeometry(QRect(60, 370, 80, 21));
        editPaycheck = new QPushButton(paycheckPage);
        editPaycheck->setObjectName(QString::fromUtf8("editPaycheck"));
        editPaycheck->setGeometry(QRect(60, 400, 80, 21));
        deletePaycheck = new QPushButton(paycheckPage);
        deletePaycheck->setObjectName(QString::fromUtf8("deletePaycheck"));
        deletePaycheck->setGeometry(QRect(60, 430, 80, 21));
        stackedWidget->addWidget(paycheckPage);
        earningsPage = new QWidget();
        earningsPage->setObjectName(QString::fromUtf8("earningsPage"));
        earningsTable = new QTableView(earningsPage);
        earningsTable->setObjectName(QString::fromUtf8("earningsTable"));
        earningsTable->setGeometry(QRect(200, 40, 601, 431));
        edateLabel = new QLabel(earningsPage);
        edateLabel->setObjectName(QString::fromUtf8("edateLabel"));
        edateLabel->setGeometry(QRect(80, 60, 31, 16));
        edateLine = new QLineEdit(earningsPage);
        edateLine->setObjectName(QString::fromUtf8("edateLine"));
        edateLine->setGeometry(QRect(40, 80, 113, 21));
        espendLabel = new QLabel(earningsPage);
        espendLabel->setObjectName(QString::fromUtf8("espendLabel"));
        espendLabel->setGeometry(QRect(70, 110, 51, 20));
        espendLine = new QLineEdit(earningsPage);
        espendLine->setObjectName(QString::fromUtf8("espendLine"));
        espendLine->setGeometry(QRect(40, 130, 113, 21));
        esaveLabel = new QLabel(earningsPage);
        esaveLabel->setObjectName(QString::fromUtf8("esaveLabel"));
        esaveLabel->setGeometry(QRect(80, 160, 47, 13));
        esaveLine = new QLineEdit(earningsPage);
        esaveLine->setObjectName(QString::fromUtf8("esaveLine"));
        esaveLine->setGeometry(QRect(40, 180, 113, 21));
        esearchLabel = new QLabel(earningsPage);
        esearchLabel->setObjectName(QString::fromUtf8("esearchLabel"));
        esearchLabel->setGeometry(QRect(218, 18, 47, 13));
        esearchLine = new QLineEdit(earningsPage);
        esearchLine->setObjectName(QString::fromUtf8("esearchLine"));
        esearchLine->setGeometry(QRect(260, 15, 131, 21));
        esearchButton = new QPushButton(earningsPage);
        esearchButton->setObjectName(QString::fromUtf8("esearchButton"));
        esearchButton->setGeometry(QRect(400, 15, 80, 21));
        esubmitButton = new QPushButton(earningsPage);
        esubmitButton->setObjectName(QString::fromUtf8("esubmitButton"));
        esubmitButton->setGeometry(QRect(55, 210, 80, 21));
        earningEditButton = new QPushButton(earningsPage);
        earningEditButton->setObjectName(QString::fromUtf8("earningEditButton"));
        earningEditButton->setGeometry(QRect(55, 240, 80, 21));
        edeleteButton = new QPushButton(earningsPage);
        edeleteButton->setObjectName(QString::fromUtf8("edeleteButton"));
        edeleteButton->setGeometry(QRect(55, 270, 80, 21));
        stackedWidget->addWidget(earningsPage);
        purchasesPageButton = new QPushButton(centralwidget);
        purchasesPageButton->setObjectName(QString::fromUtf8("purchasesPageButton"));
        purchasesPageButton->setGeometry(QRect(50, 90, 81, 31));
        paychecksPageButton = new QPushButton(centralwidget);
        paychecksPageButton->setObjectName(QString::fromUtf8("paychecksPageButton"));
        paychecksPageButton->setGeometry(QRect(50, 130, 81, 31));
        accountSettings = new QPushButton(centralwidget);
        accountSettings->setObjectName(QString::fromUtf8("accountSettings"));
        accountSettings->setGeometry(QRect(40, 490, 101, 31));
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
        earningsPageButton = new QPushButton(centralwidget);
        earningsPageButton->setObjectName(QString::fromUtf8("earningsPageButton"));
        earningsPageButton->setGeometry(QRect(50, 170, 81, 31));
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
        QObject::connect(accountSettings, SIGNAL(clicked()), finance_page, SLOT(accountSettings()));
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
        QObject::connect(submitPaycheck, SIGNAL(clicked()), finance_page, SLOT(submitPaycheck()));
        QObject::connect(editPaycheck, SIGNAL(clicked()), finance_page, SLOT(editPaycheck()));
        QObject::connect(deletePaycheck, SIGNAL(clicked()), finance_page, SLOT(deletePaycheck()));
        QObject::connect(paycheckTable, SIGNAL(clicked(QModelIndex)), finance_page, SLOT(paychecksClicked(QModelIndex)));
        QObject::connect(earningsPageButton, SIGNAL(clicked()), finance_page, SLOT(goToEarnings()));
        QObject::connect(esearchLine, SIGNAL(textChanged(QString)), finance_page, SLOT(searchEarnings()));
        QObject::connect(esearchButton, SIGNAL(clicked()), finance_page, SLOT(searchEarnings()));
        QObject::connect(earningsTable, SIGNAL(viewportEntered()), finance_page, SLOT(refreshEarningsPage()));
        QObject::connect(esubmitButton, SIGNAL(clicked()), finance_page, SLOT(submitEarning()));
        QObject::connect(earningEditButton, SIGNAL(clicked()), finance_page, SLOT(editEarning()));
        QObject::connect(edeleteButton, SIGNAL(clicked()), finance_page, SLOT(deleteEarning()));
        QObject::connect(earningsTable, SIGNAL(clicked(QModelIndex)), finance_page, SLOT(earningsClicked(QModelIndex)));

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
        submitPaycheck->setText(QCoreApplication::translate("finance_page", "Submit", nullptr));
        editPaycheck->setText(QCoreApplication::translate("finance_page", "Edit", nullptr));
        deletePaycheck->setText(QCoreApplication::translate("finance_page", "Delete", nullptr));
        edateLabel->setText(QCoreApplication::translate("finance_page", "Date", nullptr));
        espendLabel->setText(QCoreApplication::translate("finance_page", "Spending", nullptr));
        esaveLabel->setText(QCoreApplication::translate("finance_page", "Saving", nullptr));
        esearchLabel->setText(QCoreApplication::translate("finance_page", "Search:", nullptr));
        esearchButton->setText(QCoreApplication::translate("finance_page", "Search", nullptr));
        esubmitButton->setText(QCoreApplication::translate("finance_page", "Submit", nullptr));
        earningEditButton->setText(QCoreApplication::translate("finance_page", "Edit", nullptr));
        edeleteButton->setText(QCoreApplication::translate("finance_page", "Delete", nullptr));
        purchasesPageButton->setText(QCoreApplication::translate("finance_page", "Purchases", nullptr));
        paychecksPageButton->setText(QCoreApplication::translate("finance_page", "Paychecks", nullptr));
        accountSettings->setText(QCoreApplication::translate("finance_page", "Account Settings", nullptr));
        currSpendingLabel->setText(QCoreApplication::translate("finance_page", "Current Spending: $", nullptr));
        currSavingLabel->setText(QCoreApplication::translate("finance_page", "Current Savings: $", nullptr));
        earningsPageButton->setText(QCoreApplication::translate("finance_page", "Earnings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finance_page: public Ui_finance_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_PAGE_H
