#ifndef FINANCE_PAGE_H
#define FINANCE_PAGE_H
#include <QMainWindow>
#include <QDate>
#include "savings_goal.h"

namespace Ui {
class finance_page;
}

class finance_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit finance_page(QWidget *parent = nullptr);
    ~finance_page();
private slots:
    void openGoalWindow();
    void setSavingsGoal(QString);

    void searchPurchases();
    void addToPurchases();
    void goToPurchases();
    void refreshPurchases();
    void contentClicked(const QModelIndex &index);
    void editPurchases();
    void deletePurchases();

    void accountSettings();
    void refreshEarnings();

    void goToPaychecks();
    void searchPaychecks();
    void refreshPaychecks();
    void spendPercent();
    void savePercent();
    void submitPaycheck();
    void editPaycheck();
    void deletePaycheck();
    void paychecksClicked(const QModelIndex &index);

    void editEarning();
    void spendingAmount();
    void savingAmount();
    void earningsClicked(const QModelIndex &index);
    bool checkForZero(const QModelIndex &index);
    void submitEarning();
    void deleteEarning();
    void goToEarnings();
    void searchEarnings();
    void refreshEarningsPage();

private:
    Ui::finance_page *ui;
    savings_goal *save_dialog = new savings_goal;
};

#endif // FINANCE_PAGE_H
