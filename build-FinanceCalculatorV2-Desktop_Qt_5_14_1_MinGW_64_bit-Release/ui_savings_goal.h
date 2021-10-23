/********************************************************************************
** Form generated from reading UI file 'savings_goal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVINGS_GOAL_H
#define UI_SAVINGS_GOAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_savings_goal
{
public:
    QLineEdit *savingsLine;
    QPushButton *goalConfirmButton;

    void setupUi(QDialog *savings_goal)
    {
        if (savings_goal->objectName().isEmpty())
            savings_goal->setObjectName(QString::fromUtf8("savings_goal"));
        savings_goal->resize(155, 131);
        savingsLine = new QLineEdit(savings_goal);
        savingsLine->setObjectName(QString::fromUtf8("savingsLine"));
        savingsLine->setGeometry(QRect(20, 50, 113, 22));
        goalConfirmButton = new QPushButton(savings_goal);
        goalConfirmButton->setObjectName(QString::fromUtf8("goalConfirmButton"));
        goalConfirmButton->setGeometry(QRect(30, 80, 93, 28));
        goalConfirmButton->setAutoDefault(true);

        retranslateUi(savings_goal);
        QObject::connect(goalConfirmButton, SIGNAL(clicked()), savings_goal, SLOT(emitGoalSignal()));

        QMetaObject::connectSlotsByName(savings_goal);
    } // setupUi

    void retranslateUi(QDialog *savings_goal)
    {
        savings_goal->setWindowTitle(QCoreApplication::translate("savings_goal", "Dialog", nullptr));
        goalConfirmButton->setText(QCoreApplication::translate("savings_goal", "Set as Goal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class savings_goal: public Ui_savings_goal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVINGS_GOAL_H
