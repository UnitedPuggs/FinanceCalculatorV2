/********************************************************************************
** Form generated from reading UI file 'finance_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCE_PAGE_H
#define UI_FINANCE_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finance_page
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *financePage;
    QTableView *financeTable;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *infovert;
    QVBoxLayout *datevert;
    QLabel *dateLabel;
    QLineEdit *dateLine;
    QVBoxLayout *itemvert;
    QLabel *itemLabel;
    QLineEdit *itemLine;
    QVBoxLayout *amtvert;
    QLabel *amountLabel;
    QLineEdit *amountLine;
    QVBoxLayout *notevert;
    QLabel *noteLabel;
    QTextEdit *noteLine;
    QVBoxLayout *deletevert;
    QPushButton *submitButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *searchhoriz;
    QLabel *searchLabel;
    QLineEdit *searchLine;
    QSpacerItem *horizontalSpacer;
    QPushButton *financeSearchButton;
    QWidget *paycheckPage;
    QTableView *paycheckTable;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *checkvert;
    QVBoxLayout *pdatevert;
    QLabel *pdateLabel;
    QLineEdit *pdateLine;
    QVBoxLayout *pctvert;
    QLabel *pamountLabel;
    QLineEdit *pamountLine;
    QHBoxLayout *savehoriz;
    QVBoxLayout *spendvert;
    QLabel *spendLabel;
    QDoubleSpinBox *spendingPercent;
    QVBoxLayout *savevert;
    QLabel *savingLabel;
    QDoubleSpinBox *savingPercent;
    QVBoxLayout *pnotevert;
    QLabel *pnoteLabel;
    QTextEdit *noteEdit;
    QVBoxLayout *buttonvert;
    QPushButton *submitPaycheck;
    QPushButton *editPaycheck;
    QPushButton *deletePaycheck;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *paycheckSearchHorizLayout;
    QLabel *paycheckSearchLabel;
    QLineEdit *paycheckSearchLine;
    QSpacerItem *searchHorizSpacer;
    QPushButton *paycheckSearchButton;
    QWidget *earningsPage;
    QTableView *earningsTable;
    QWidget *verticalLayoutWidget_17;
    QVBoxLayout *earningvert;
    QVBoxLayout *edatevert;
    QLabel *edateLabel;
    QLineEdit *edateLine;
    QVBoxLayout *espendvert;
    QLabel *espendLabel;
    QLineEdit *espendLine;
    QVBoxLayout *esavevert;
    QLabel *esaveLabel;
    QLineEdit *esaveLine;
    QVBoxLayout *ebuttonvvert;
    QPushButton *esubmitButton;
    QPushButton *earningEditButton;
    QPushButton *edeleteButton;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *earningsearchhoriz;
    QLabel *esearchLabel;
    QLineEdit *esearchLine;
    QPushButton *esearchButton;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *windowvert;
    QPushButton *purchasesPageButton;
    QPushButton *paychecksPageButton;
    QPushButton *earningsPageButton;
    QWidget *verticalLayoutWidget_15;
    QVBoxLayout *currentvert;
    QHBoxLayout *currspendhoriz;
    QLabel *currSpendingLabel;
    QLineEdit *spendingLine;
    QHBoxLayout *currsavehoriz;
    QLabel *currSavingLabel;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *savingsLine;
    QWidget *verticalLayoutWidget_16;
    QVBoxLayout *acctvert;
    QPushButton *accountSettings;
    QLabel *currentPageLabel;
    QLabel *pageLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *finance_page)
    {
        if (finance_page->objectName().isEmpty())
            finance_page->setObjectName(QString::fromUtf8("finance_page"));
        finance_page->resize(1198, 593);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(finance_page->sizePolicy().hasHeightForWidth());
        finance_page->setSizePolicy(sizePolicy);
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
        verticalLayoutWidget = new QWidget(financePage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 40, 161, 411));
        infovert = new QVBoxLayout(verticalLayoutWidget);
        infovert->setObjectName(QString::fromUtf8("infovert"));
        infovert->setContentsMargins(0, 0, 0, 0);
        datevert = new QVBoxLayout();
        datevert->setObjectName(QString::fromUtf8("datevert"));
        datevert->setSizeConstraint(QLayout::SetNoConstraint);
        dateLabel = new QLabel(verticalLayoutWidget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dateLabel->sizePolicy().hasHeightForWidth());
        dateLabel->setSizePolicy(sizePolicy1);
        dateLabel->setFrameShape(QFrame::NoFrame);
        dateLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        datevert->addWidget(dateLabel, 0, Qt::AlignHCenter);

        dateLine = new QLineEdit(verticalLayoutWidget);
        dateLine->setObjectName(QString::fromUtf8("dateLine"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dateLine->sizePolicy().hasHeightForWidth());
        dateLine->setSizePolicy(sizePolicy2);

        datevert->addWidget(dateLine, 0, Qt::AlignHCenter);


        infovert->addLayout(datevert);

        itemvert = new QVBoxLayout();
        itemvert->setObjectName(QString::fromUtf8("itemvert"));
        itemvert->setSizeConstraint(QLayout::SetNoConstraint);
        itemLabel = new QLabel(verticalLayoutWidget);
        itemLabel->setObjectName(QString::fromUtf8("itemLabel"));

        itemvert->addWidget(itemLabel, 0, Qt::AlignHCenter);

        itemLine = new QLineEdit(verticalLayoutWidget);
        itemLine->setObjectName(QString::fromUtf8("itemLine"));
        sizePolicy2.setHeightForWidth(itemLine->sizePolicy().hasHeightForWidth());
        itemLine->setSizePolicy(sizePolicy2);

        itemvert->addWidget(itemLine, 0, Qt::AlignHCenter);


        infovert->addLayout(itemvert);

        amtvert = new QVBoxLayout();
        amtvert->setObjectName(QString::fromUtf8("amtvert"));
        amountLabel = new QLabel(verticalLayoutWidget);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));

        amtvert->addWidget(amountLabel, 0, Qt::AlignHCenter);

        amountLine = new QLineEdit(verticalLayoutWidget);
        amountLine->setObjectName(QString::fromUtf8("amountLine"));
        sizePolicy2.setHeightForWidth(amountLine->sizePolicy().hasHeightForWidth());
        amountLine->setSizePolicy(sizePolicy2);

        amtvert->addWidget(amountLine, 0, Qt::AlignHCenter);


        infovert->addLayout(amtvert);

        notevert = new QVBoxLayout();
        notevert->setObjectName(QString::fromUtf8("notevert"));
        noteLabel = new QLabel(verticalLayoutWidget);
        noteLabel->setObjectName(QString::fromUtf8("noteLabel"));

        notevert->addWidget(noteLabel);

        noteLine = new QTextEdit(verticalLayoutWidget);
        noteLine->setObjectName(QString::fromUtf8("noteLine"));
        sizePolicy2.setHeightForWidth(noteLine->sizePolicy().hasHeightForWidth());
        noteLine->setSizePolicy(sizePolicy2);
        noteLine->setFrameShadow(QFrame::Sunken);

        notevert->addWidget(noteLine);


        infovert->addLayout(notevert);

        deletevert = new QVBoxLayout();
        deletevert->setObjectName(QString::fromUtf8("deletevert"));
        submitButton = new QPushButton(verticalLayoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        sizePolicy2.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy2);

        deletevert->addWidget(submitButton, 0, Qt::AlignHCenter);

        editButton = new QPushButton(verticalLayoutWidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        sizePolicy2.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy2);

        deletevert->addWidget(editButton, 0, Qt::AlignHCenter);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy2.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy2);

        deletevert->addWidget(deleteButton, 0, Qt::AlignHCenter);


        infovert->addLayout(deletevert);

        horizontalLayoutWidget = new QWidget(financePage);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 10, 351, 31));
        searchhoriz = new QHBoxLayout(horizontalLayoutWidget);
        searchhoriz->setObjectName(QString::fromUtf8("searchhoriz"));
        searchhoriz->setContentsMargins(0, 0, 0, 0);
        searchLabel = new QLabel(horizontalLayoutWidget);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy3);

        searchhoriz->addWidget(searchLabel);

        searchLine = new QLineEdit(horizontalLayoutWidget);
        searchLine->setObjectName(QString::fromUtf8("searchLine"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(searchLine->sizePolicy().hasHeightForWidth());
        searchLine->setSizePolicy(sizePolicy4);

        searchhoriz->addWidget(searchLine);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        searchhoriz->addItem(horizontalSpacer);

        financeSearchButton = new QPushButton(horizontalLayoutWidget);
        financeSearchButton->setObjectName(QString::fromUtf8("financeSearchButton"));
        sizePolicy2.setHeightForWidth(financeSearchButton->sizePolicy().hasHeightForWidth());
        financeSearchButton->setSizePolicy(sizePolicy2);

        searchhoriz->addWidget(financeSearchButton);

        stackedWidget->addWidget(financePage);
        paycheckPage = new QWidget();
        paycheckPage->setObjectName(QString::fromUtf8("paycheckPage"));
        paycheckTable = new QTableView(paycheckPage);
        paycheckTable->setObjectName(QString::fromUtf8("paycheckTable"));
        paycheckTable->setGeometry(QRect(200, 40, 601, 431));
        verticalLayoutWidget_10 = new QWidget(paycheckPage);
        verticalLayoutWidget_10->setObjectName(QString::fromUtf8("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(30, 40, 151, 345));
        checkvert = new QVBoxLayout(verticalLayoutWidget_10);
        checkvert->setObjectName(QString::fromUtf8("checkvert"));
        checkvert->setContentsMargins(0, 0, 0, 0);
        pdatevert = new QVBoxLayout();
        pdatevert->setObjectName(QString::fromUtf8("pdatevert"));
        pdateLabel = new QLabel(verticalLayoutWidget_10);
        pdateLabel->setObjectName(QString::fromUtf8("pdateLabel"));

        pdatevert->addWidget(pdateLabel, 0, Qt::AlignHCenter);

        pdateLine = new QLineEdit(verticalLayoutWidget_10);
        pdateLine->setObjectName(QString::fromUtf8("pdateLine"));
        sizePolicy2.setHeightForWidth(pdateLine->sizePolicy().hasHeightForWidth());
        pdateLine->setSizePolicy(sizePolicy2);

        pdatevert->addWidget(pdateLine, 0, Qt::AlignHCenter);


        checkvert->addLayout(pdatevert);

        pctvert = new QVBoxLayout();
        pctvert->setObjectName(QString::fromUtf8("pctvert"));
        pamountLabel = new QLabel(verticalLayoutWidget_10);
        pamountLabel->setObjectName(QString::fromUtf8("pamountLabel"));

        pctvert->addWidget(pamountLabel, 0, Qt::AlignHCenter);

        pamountLine = new QLineEdit(verticalLayoutWidget_10);
        pamountLine->setObjectName(QString::fromUtf8("pamountLine"));
        sizePolicy2.setHeightForWidth(pamountLine->sizePolicy().hasHeightForWidth());
        pamountLine->setSizePolicy(sizePolicy2);

        pctvert->addWidget(pamountLine, 0, Qt::AlignHCenter);

        savehoriz = new QHBoxLayout();
        savehoriz->setObjectName(QString::fromUtf8("savehoriz"));
        spendvert = new QVBoxLayout();
        spendvert->setObjectName(QString::fromUtf8("spendvert"));
        spendLabel = new QLabel(verticalLayoutWidget_10);
        spendLabel->setObjectName(QString::fromUtf8("spendLabel"));

        spendvert->addWidget(spendLabel);

        spendingPercent = new QDoubleSpinBox(verticalLayoutWidget_10);
        spendingPercent->setObjectName(QString::fromUtf8("spendingPercent"));

        spendvert->addWidget(spendingPercent);


        savehoriz->addLayout(spendvert);

        savevert = new QVBoxLayout();
        savevert->setObjectName(QString::fromUtf8("savevert"));
        savingLabel = new QLabel(verticalLayoutWidget_10);
        savingLabel->setObjectName(QString::fromUtf8("savingLabel"));

        savevert->addWidget(savingLabel);

        savingPercent = new QDoubleSpinBox(verticalLayoutWidget_10);
        savingPercent->setObjectName(QString::fromUtf8("savingPercent"));

        savevert->addWidget(savingPercent);


        savehoriz->addLayout(savevert);


        pctvert->addLayout(savehoriz);

        pnotevert = new QVBoxLayout();
        pnotevert->setObjectName(QString::fromUtf8("pnotevert"));
        pnoteLabel = new QLabel(verticalLayoutWidget_10);
        pnoteLabel->setObjectName(QString::fromUtf8("pnoteLabel"));

        pnotevert->addWidget(pnoteLabel);

        noteEdit = new QTextEdit(verticalLayoutWidget_10);
        noteEdit->setObjectName(QString::fromUtf8("noteEdit"));

        pnotevert->addWidget(noteEdit);

        buttonvert = new QVBoxLayout();
        buttonvert->setObjectName(QString::fromUtf8("buttonvert"));
        submitPaycheck = new QPushButton(verticalLayoutWidget_10);
        submitPaycheck->setObjectName(QString::fromUtf8("submitPaycheck"));
        sizePolicy2.setHeightForWidth(submitPaycheck->sizePolicy().hasHeightForWidth());
        submitPaycheck->setSizePolicy(sizePolicy2);

        buttonvert->addWidget(submitPaycheck, 0, Qt::AlignHCenter);

        editPaycheck = new QPushButton(verticalLayoutWidget_10);
        editPaycheck->setObjectName(QString::fromUtf8("editPaycheck"));
        sizePolicy2.setHeightForWidth(editPaycheck->sizePolicy().hasHeightForWidth());
        editPaycheck->setSizePolicy(sizePolicy2);

        buttonvert->addWidget(editPaycheck, 0, Qt::AlignHCenter);

        deletePaycheck = new QPushButton(verticalLayoutWidget_10);
        deletePaycheck->setObjectName(QString::fromUtf8("deletePaycheck"));
        sizePolicy2.setHeightForWidth(deletePaycheck->sizePolicy().hasHeightForWidth());
        deletePaycheck->setSizePolicy(sizePolicy2);

        buttonvert->addWidget(deletePaycheck, 0, Qt::AlignHCenter);


        pnotevert->addLayout(buttonvert);


        pctvert->addLayout(pnotevert);


        checkvert->addLayout(pctvert);

        horizontalLayoutWidget_3 = new QWidget(paycheckPage);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(200, 10, 361, 31));
        paycheckSearchHorizLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        paycheckSearchHorizLayout->setObjectName(QString::fromUtf8("paycheckSearchHorizLayout"));
        paycheckSearchHorizLayout->setContentsMargins(0, 0, 0, 0);
        paycheckSearchLabel = new QLabel(horizontalLayoutWidget_3);
        paycheckSearchLabel->setObjectName(QString::fromUtf8("paycheckSearchLabel"));

        paycheckSearchHorizLayout->addWidget(paycheckSearchLabel);

        paycheckSearchLine = new QLineEdit(horizontalLayoutWidget_3);
        paycheckSearchLine->setObjectName(QString::fromUtf8("paycheckSearchLine"));

        paycheckSearchHorizLayout->addWidget(paycheckSearchLine);

        searchHorizSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        paycheckSearchHorizLayout->addItem(searchHorizSpacer);

        paycheckSearchButton = new QPushButton(horizontalLayoutWidget_3);
        paycheckSearchButton->setObjectName(QString::fromUtf8("paycheckSearchButton"));

        paycheckSearchHorizLayout->addWidget(paycheckSearchButton);

        stackedWidget->addWidget(paycheckPage);
        earningsPage = new QWidget();
        earningsPage->setObjectName(QString::fromUtf8("earningsPage"));
        earningsTable = new QTableView(earningsPage);
        earningsTable->setObjectName(QString::fromUtf8("earningsTable"));
        earningsTable->setGeometry(QRect(200, 40, 601, 431));
        verticalLayoutWidget_17 = new QWidget(earningsPage);
        verticalLayoutWidget_17->setObjectName(QString::fromUtf8("verticalLayoutWidget_17"));
        verticalLayoutWidget_17->setGeometry(QRect(20, 40, 160, 252));
        earningvert = new QVBoxLayout(verticalLayoutWidget_17);
        earningvert->setObjectName(QString::fromUtf8("earningvert"));
        earningvert->setContentsMargins(0, 0, 0, 0);
        edatevert = new QVBoxLayout();
        edatevert->setObjectName(QString::fromUtf8("edatevert"));
        edateLabel = new QLabel(verticalLayoutWidget_17);
        edateLabel->setObjectName(QString::fromUtf8("edateLabel"));

        edatevert->addWidget(edateLabel, 0, Qt::AlignHCenter);

        edateLine = new QLineEdit(verticalLayoutWidget_17);
        edateLine->setObjectName(QString::fromUtf8("edateLine"));
        sizePolicy2.setHeightForWidth(edateLine->sizePolicy().hasHeightForWidth());
        edateLine->setSizePolicy(sizePolicy2);

        edatevert->addWidget(edateLine, 0, Qt::AlignHCenter);


        earningvert->addLayout(edatevert);

        espendvert = new QVBoxLayout();
        espendvert->setObjectName(QString::fromUtf8("espendvert"));
        espendLabel = new QLabel(verticalLayoutWidget_17);
        espendLabel->setObjectName(QString::fromUtf8("espendLabel"));

        espendvert->addWidget(espendLabel, 0, Qt::AlignHCenter);

        espendLine = new QLineEdit(verticalLayoutWidget_17);
        espendLine->setObjectName(QString::fromUtf8("espendLine"));
        sizePolicy2.setHeightForWidth(espendLine->sizePolicy().hasHeightForWidth());
        espendLine->setSizePolicy(sizePolicy2);

        espendvert->addWidget(espendLine, 0, Qt::AlignHCenter);


        earningvert->addLayout(espendvert);

        esavevert = new QVBoxLayout();
        esavevert->setObjectName(QString::fromUtf8("esavevert"));
        esaveLabel = new QLabel(verticalLayoutWidget_17);
        esaveLabel->setObjectName(QString::fromUtf8("esaveLabel"));

        esavevert->addWidget(esaveLabel, 0, Qt::AlignHCenter);

        esaveLine = new QLineEdit(verticalLayoutWidget_17);
        esaveLine->setObjectName(QString::fromUtf8("esaveLine"));
        sizePolicy2.setHeightForWidth(esaveLine->sizePolicy().hasHeightForWidth());
        esaveLine->setSizePolicy(sizePolicy2);

        esavevert->addWidget(esaveLine, 0, Qt::AlignHCenter);


        earningvert->addLayout(esavevert);

        ebuttonvvert = new QVBoxLayout();
        ebuttonvvert->setObjectName(QString::fromUtf8("ebuttonvvert"));
        esubmitButton = new QPushButton(verticalLayoutWidget_17);
        esubmitButton->setObjectName(QString::fromUtf8("esubmitButton"));
        sizePolicy2.setHeightForWidth(esubmitButton->sizePolicy().hasHeightForWidth());
        esubmitButton->setSizePolicy(sizePolicy2);
        esubmitButton->setLayoutDirection(Qt::LeftToRight);

        ebuttonvvert->addWidget(esubmitButton, 0, Qt::AlignHCenter);

        earningEditButton = new QPushButton(verticalLayoutWidget_17);
        earningEditButton->setObjectName(QString::fromUtf8("earningEditButton"));
        sizePolicy2.setHeightForWidth(earningEditButton->sizePolicy().hasHeightForWidth());
        earningEditButton->setSizePolicy(sizePolicy2);

        ebuttonvvert->addWidget(earningEditButton, 0, Qt::AlignHCenter);

        edeleteButton = new QPushButton(verticalLayoutWidget_17);
        edeleteButton->setObjectName(QString::fromUtf8("edeleteButton"));
        sizePolicy2.setHeightForWidth(edeleteButton->sizePolicy().hasHeightForWidth());
        edeleteButton->setSizePolicy(sizePolicy2);

        ebuttonvvert->addWidget(edeleteButton, 0, Qt::AlignHCenter);


        earningvert->addLayout(ebuttonvvert);

        horizontalLayoutWidget_6 = new QWidget(earningsPage);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(200, 10, 361, 31));
        earningsearchhoriz = new QHBoxLayout(horizontalLayoutWidget_6);
        earningsearchhoriz->setObjectName(QString::fromUtf8("earningsearchhoriz"));
        earningsearchhoriz->setContentsMargins(0, 0, 0, 0);
        esearchLabel = new QLabel(horizontalLayoutWidget_6);
        esearchLabel->setObjectName(QString::fromUtf8("esearchLabel"));

        earningsearchhoriz->addWidget(esearchLabel);

        esearchLine = new QLineEdit(horizontalLayoutWidget_6);
        esearchLine->setObjectName(QString::fromUtf8("esearchLine"));

        earningsearchhoriz->addWidget(esearchLine);

        esearchButton = new QPushButton(horizontalLayoutWidget_6);
        esearchButton->setObjectName(QString::fromUtf8("esearchButton"));

        earningsearchhoriz->addWidget(esearchButton);

        stackedWidget->addWidget(earningsPage);
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(50, 90, 82, 121));
        windowvert = new QVBoxLayout(verticalLayoutWidget_7);
        windowvert->setObjectName(QString::fromUtf8("windowvert"));
        windowvert->setContentsMargins(0, 0, 0, 0);
        purchasesPageButton = new QPushButton(verticalLayoutWidget_7);
        purchasesPageButton->setObjectName(QString::fromUtf8("purchasesPageButton"));
        sizePolicy2.setHeightForWidth(purchasesPageButton->sizePolicy().hasHeightForWidth());
        purchasesPageButton->setSizePolicy(sizePolicy2);

        windowvert->addWidget(purchasesPageButton);

        paychecksPageButton = new QPushButton(verticalLayoutWidget_7);
        paychecksPageButton->setObjectName(QString::fromUtf8("paychecksPageButton"));
        sizePolicy2.setHeightForWidth(paychecksPageButton->sizePolicy().hasHeightForWidth());
        paychecksPageButton->setSizePolicy(sizePolicy2);

        windowvert->addWidget(paychecksPageButton);

        earningsPageButton = new QPushButton(verticalLayoutWidget_7);
        earningsPageButton->setObjectName(QString::fromUtf8("earningsPageButton"));
        sizePolicy2.setHeightForWidth(earningsPageButton->sizePolicy().hasHeightForWidth());
        earningsPageButton->setSizePolicy(sizePolicy2);

        windowvert->addWidget(earningsPageButton);

        verticalLayoutWidget_15 = new QWidget(centralwidget);
        verticalLayoutWidget_15->setObjectName(QString::fromUtf8("verticalLayoutWidget_15"));
        verticalLayoutWidget_15->setGeometry(QRect(960, 90, 211, 80));
        currentvert = new QVBoxLayout(verticalLayoutWidget_15);
        currentvert->setObjectName(QString::fromUtf8("currentvert"));
        currentvert->setContentsMargins(0, 0, 0, 0);
        currspendhoriz = new QHBoxLayout();
        currspendhoriz->setObjectName(QString::fromUtf8("currspendhoriz"));
        currSpendingLabel = new QLabel(verticalLayoutWidget_15);
        currSpendingLabel->setObjectName(QString::fromUtf8("currSpendingLabel"));

        currspendhoriz->addWidget(currSpendingLabel);

        spendingLine = new QLineEdit(verticalLayoutWidget_15);
        spendingLine->setObjectName(QString::fromUtf8("spendingLine"));
        spendingLine->setReadOnly(true);

        currspendhoriz->addWidget(spendingLine);


        currentvert->addLayout(currspendhoriz);

        currsavehoriz = new QHBoxLayout();
        currsavehoriz->setObjectName(QString::fromUtf8("currsavehoriz"));
        currSavingLabel = new QLabel(verticalLayoutWidget_15);
        currSavingLabel->setObjectName(QString::fromUtf8("currSavingLabel"));

        currsavehoriz->addWidget(currSavingLabel);

        horizontalSpacer_3 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        currsavehoriz->addItem(horizontalSpacer_3);

        savingsLine = new QLineEdit(verticalLayoutWidget_15);
        savingsLine->setObjectName(QString::fromUtf8("savingsLine"));
        savingsLine->setReadOnly(true);

        currsavehoriz->addWidget(savingsLine);


        currentvert->addLayout(currsavehoriz);

        verticalLayoutWidget_16 = new QWidget(centralwidget);
        verticalLayoutWidget_16->setObjectName(QString::fromUtf8("verticalLayoutWidget_16"));
        verticalLayoutWidget_16->setGeometry(QRect(40, 460, 101, 31));
        acctvert = new QVBoxLayout(verticalLayoutWidget_16);
        acctvert->setObjectName(QString::fromUtf8("acctvert"));
        acctvert->setContentsMargins(0, 0, 0, 0);
        accountSettings = new QPushButton(verticalLayoutWidget_16);
        accountSettings->setObjectName(QString::fromUtf8("accountSettings"));

        acctvert->addWidget(accountSettings);

        currentPageLabel = new QLabel(centralwidget);
        currentPageLabel->setObjectName(QString::fromUtf8("currentPageLabel"));
        currentPageLabel->setGeometry(QRect(10, 10, 91, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        currentPageLabel->setFont(font);
        pageLabel = new QLabel(centralwidget);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        pageLabel->setGeometry(QRect(106, 8, 51, 20));
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
        dateLabel->setText(QCoreApplication::translate("finance_page", "Date of Purchase", nullptr));
        dateLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a date...", nullptr));
        itemLabel->setText(QCoreApplication::translate("finance_page", "Item Name", nullptr));
        itemLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter an item...", nullptr));
        amountLabel->setText(QCoreApplication::translate("finance_page", "Amount Spent", nullptr));
        amountLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter price...", nullptr));
        noteLabel->setText(QCoreApplication::translate("finance_page", "Notes", nullptr));
        noteLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter note here...", nullptr));
        submitButton->setText(QCoreApplication::translate("finance_page", "Submit", nullptr));
        editButton->setText(QCoreApplication::translate("finance_page", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("finance_page", "Delete", nullptr));
        searchLabel->setText(QCoreApplication::translate("finance_page", "Search:", nullptr));
        searchLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter an item or date...", nullptr));
        financeSearchButton->setText(QCoreApplication::translate("finance_page", "Search", nullptr));
        pdateLabel->setText(QCoreApplication::translate("finance_page", "Date", nullptr));
        pdateLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a date...", nullptr));
        pamountLabel->setText(QCoreApplication::translate("finance_page", "Paycheck Amount", nullptr));
        pamountLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter paycheck...", nullptr));
        spendLabel->setText(QCoreApplication::translate("finance_page", "Spending %", nullptr));
        savingLabel->setText(QCoreApplication::translate("finance_page", "Saving %", nullptr));
        pnoteLabel->setText(QCoreApplication::translate("finance_page", "Note", nullptr));
        noteEdit->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a note...", nullptr));
        submitPaycheck->setText(QCoreApplication::translate("finance_page", "Submit", nullptr));
        editPaycheck->setText(QCoreApplication::translate("finance_page", "Edit", nullptr));
        deletePaycheck->setText(QCoreApplication::translate("finance_page", "Delete", nullptr));
        paycheckSearchLabel->setText(QCoreApplication::translate("finance_page", "Search:", nullptr));
        paycheckSearchLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a date...", nullptr));
        paycheckSearchButton->setText(QCoreApplication::translate("finance_page", "Search", nullptr));
        edateLabel->setText(QCoreApplication::translate("finance_page", "Date", nullptr));
        edateLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a date...", nullptr));
        espendLabel->setText(QCoreApplication::translate("finance_page", "Spending", nullptr));
        espendLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter spending...", nullptr));
        esaveLabel->setText(QCoreApplication::translate("finance_page", "Saving", nullptr));
        esaveLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter savings...", nullptr));
        esubmitButton->setText(QCoreApplication::translate("finance_page", "Submit", nullptr));
        earningEditButton->setText(QCoreApplication::translate("finance_page", "Edit", nullptr));
        edeleteButton->setText(QCoreApplication::translate("finance_page", "Delete", nullptr));
        esearchLabel->setText(QCoreApplication::translate("finance_page", "Search:", nullptr));
        esearchLine->setPlaceholderText(QCoreApplication::translate("finance_page", "Enter a date...", nullptr));
        esearchButton->setText(QCoreApplication::translate("finance_page", "Search", nullptr));
        purchasesPageButton->setText(QCoreApplication::translate("finance_page", "Purchases", nullptr));
        paychecksPageButton->setText(QCoreApplication::translate("finance_page", "Paychecks", nullptr));
        earningsPageButton->setText(QCoreApplication::translate("finance_page", "Earnings", nullptr));
        currSpendingLabel->setText(QCoreApplication::translate("finance_page", "Current Spending: $", nullptr));
        currSavingLabel->setText(QCoreApplication::translate("finance_page", "Current Savings: $", nullptr));
        accountSettings->setText(QCoreApplication::translate("finance_page", "Account Settings", nullptr));
        currentPageLabel->setText(QCoreApplication::translate("finance_page", "CURRENT PAGE: ", nullptr));
        pageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class finance_page: public Ui_finance_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_PAGE_H
