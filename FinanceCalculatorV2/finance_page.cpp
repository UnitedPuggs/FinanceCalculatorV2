#include "finance_page.h"
#include "ui_finance_page.h"
#include "header.h"
#include <QRegExp>
#include <QRegExpValidator>

finance_page::finance_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::finance_page) {
    ui->setupUi(this);

    refreshPurchases();
    refreshPaychecks();

    ui->dateLine->setValidator(new QRegExpValidator(QRegExp("([1-9]|1[012])[- /.](0[1-9]|[12][0-9]|3[01])[- /.](19|20)\\d\\d")));
    ui->pdateLine->setValidator(new QRegExpValidator(QRegExp("([1-9]|1[012])[- /.](0[1-9]|[12][0-9]|3[01])[- /.](19|20)\\d\\d")));
    ui->amountLine->setValidator(new QRegExpValidator(QRegExp("[1-9][0-9]{0,5}\\.[0-9]{1,2}")));
    ui->pamountLine->setValidator(new QRegExpValidator(QRegExp("[1-9][0-9]{0,5}\\.[0-9]{1,2}")));
}

finance_page::~finance_page()
{
    delete ui;
}



void finance_page::searchPurchases() {
    QSqlQuery query;
    QSqlRecord record;
    QSqlQueryModel *model = new QSqlQueryModel();
    QString search = ui->searchLine->text();

    query.prepare("SELECT * FROM Purchases WHERE Date LIKE '%" + search + "%' OR Item LIKE '%" + search + "%'");

    if(!query.exec())
        qDebug() << query.lastError();

    model->setQuery(query);
    ui->financeTable->setModel(model);
    ui->financeTable->setColumnWidth(0, 100);
    ui->financeTable->setColumnWidth(1, 180);
    ui->financeTable->setColumnWidth(2, 140);
    ui->financeTable->setColumnWidth(3, 164);

    for(int i = 0; i < model->rowCount(); ++i)
        ui->financeTable->resizeRowToContents(i);

}

void finance_page::addToPurchases() {
    QSqlQuery query;

    QString date = ui->dateLine->text();
    QString item = ui->itemLine->text();
    QString spent = ui->amountLine->text();
    QString note = ui->noteLine->toPlainText();

    if (date == "")
        QMessageBox::warning(this, "", "Please enter a date!");
    else if (item == "")
        QMessageBox::warning(this, "", "Please enter an item!");
    else if (spent == "")
        QMessageBox::warning(this, "", "Please enter an amount!");
    else {
        query.prepare("INSERT OR IGNORE INTO Purchases(Date, Item, Spent, Note) "
                      "VALUES(:date, :item, :spent, :note);");

        query.bindValue(":date", date);
        query.bindValue(":item", item);
        query.bindValue(":spent", spent);
        query.bindValue(":note", note);

        if(!query.exec())
            qDebug() << query.lastError();

        QMessageBox::information(this, "Success!", "Purchase added!");

        ui->dateLine->setText("");
        ui->itemLine->setText("");
        ui->amountLine->setText("");
        ui->noteLine->setText("");
        refreshPurchases();
    }
}

void finance_page::goToPurchases() {
    ui->stackedWidget->setCurrentIndex(0);
}

void finance_page::refreshPurchases() {
    QSqlQuery query;
    QSqlRecord record;
    QSqlQueryModel *model = new QSqlQueryModel();

    query.prepare("SELECT * FROM Purchases ORDER BY Date ASC");

    if(!query.exec())
        qDebug() << query.lastError();

    model->setQuery(query);
    ui->financeTable->setModel(model);
    ui->financeTable->setColumnWidth(0, 100);
    ui->financeTable->setColumnWidth(1, 180);
    ui->financeTable->setColumnWidth(2, 140);
    ui->financeTable->setColumnWidth(3, 164);

    for(int i = 0; i < model->rowCount(); ++i)
        ui->financeTable->resizeRowToContents(i);

    refreshEarnings();
}


void finance_page::contentClicked(const QModelIndex &index) {
    QSqlQuery query;
    QString val = ui->financeTable->model()->data(index).toString();

    query.prepare("SELECT * FROM Purchases WHERE Item = '" + val + "';");

    if(!query.exec())
        qDebug() << query.lastError();

    else {
        while(query.next()) {
            ui->dateLine->setText(query.value(0).toString());
            ui->itemLine->setText(query.value(1).toString());
            ui->amountLine->setText(query.value(2).toString());
            ui->noteLine->setText(query.value(3).toString());
        }
    }
}

void finance_page::editPurchases() {
    QSqlQuery query;

    QString date = ui->dateLine->text();
    QString item = ui->itemLine->text();
    QString spent = ui->amountLine->text();
    QString note = ui->noteLine->toPlainText();

    query.prepare("UPDATE Purchases "
                  "SET Date = :date, "
                  "    Item = :item, "
                  "    Spent = :spent, "
                  "    Note = :note "
                  "WHERE Item = :item");

    query.bindValue(":date", date);
    query.bindValue(":item", item);
    query.bindValue(":spent", spent);
    query.bindValue(":note", note);

    if(!query.exec())
        qDebug() << query.lastError();
    refreshPurchases();
}

void finance_page::deletePurchases() {
    QSqlQuery query;
    QString date = ui->dateLine->text();
    QString item = ui->itemLine->text();
    query.prepare("DELETE FROM Purchases WHERE Date = '" + date + "' AND Item = '" + item + "';");

    if(!query.exec())
        qDebug() << query.lastError();
    refreshPurchases();
}

void finance_page::goToPaychecks() {
    ui->stackedWidget->setCurrentIndex(1);
}

void finance_page::accountSettings() {

}

void finance_page::searchPaychecks() {
    QSqlQuery query;
    QSqlRecord record;
    QSqlQueryModel *model = new QSqlQueryModel();
    QString search = ui->paycheckSearchLine->text();

    query.prepare("SELECT * FROM Paychecks WHERE Date LIKE '%" + search + "%'");

    if(!query.exec())
        qDebug() << query.lastError();

    model->setQuery(query);
    ui->paycheckTable->setModel(model);
    ui->paycheckTable->setColumnWidth(0, 100);
    ui->paycheckTable->setColumnWidth(1, 180);
    ui->paycheckTable->setColumnWidth(2, 140);
    ui->paycheckTable->setColumnWidth(3, 164);

    for(int i = 0; i < model->rowCount(); ++i)
        ui->paycheckTable->resizeRowToContents(i);

}

void finance_page::refreshPaychecks() {
    QSqlQuery query;
    QSqlRecord record;
    QSqlQueryModel *model = new QSqlQueryModel();

    query.prepare("SELECT * FROM Paychecks ORDER BY Date ASC");

    if(!query.exec())
        qDebug() << query.lastError();

    model->setQuery(query);
    ui->paycheckTable->setModel(model);
    ui->paycheckTable->setColumnWidth(0, 192);
    ui->paycheckTable->setColumnWidth(1, 192);
    ui->paycheckTable->setColumnWidth(2, 200);

    for(int i = 0; i < model->rowCount(); ++i)
        ui->financeTable->resizeRowToContents(i);

    refreshEarnings();
}

void finance_page::spendPercent() {
    double spendingPercent = ui->spendingPercent->value();
    ui->savingPercent->setValue(qFabs(spendingPercent-100));
}

void finance_page::savePercent() {
    double savingPercent = ui->savingPercent->value();
    ui->spendingPercent->setValue(qFabs(savingPercent-100));
}

void finance_page::submitPaycheck() {
    QSqlQuery query, earnings;

    QString date = ui->pdateLine->text();
    QString note = ui->noteEdit->toPlainText();
    double amount = ui->pamountLine->text().toDouble();

    double spending = ui->spendingPercent->value();
    double saving = ui->savingPercent->value();

    if (date == "")
        QMessageBox::warning(this, "", "Please enter a date!");
    else if (amount == 0)
        QMessageBox::warning(this, "", "Please enter an amount!");
    else if (saving == 0 && spending == 0)
        QMessageBox::warning(this, "", "Please enter an percentage!");
    else {
        query.prepare("INSERT OR IGNORE INTO Paychecks(Date, Amount, Note) "
                      "VALUES(:date, :amount, :note);");
        query.bindValue(":date", date);
        query.bindValue(":amount", amount);
        query.bindValue(":note", note);

        if(!query.exec())
            qDebug() << query.lastError();

        earnings.prepare("INSERT OR IGNORE INTO Earnings(Date, Spending, Saving) "
                         "VALUES(:date, :spending, :saving);");

        earnings.bindValue(":date", date);
        earnings.bindValue(":spending", amount * (spending/100));
        earnings.bindValue(":saving", amount * (saving/100));

        if(!earnings.exec())
            qDebug() << earnings.lastError();

        QMessageBox::information(this, "Success!", "Purchase added!");

        ui->pdateLine->setText("");
        ui->pamountLine->setText("");
        ui->noteEdit->setText("");
        refreshPaychecks();
        refreshEarnings();
    }
}

void finance_page::editPaycheck() {
    QSqlQuery query;

    QString date = ui->pdateLine->text();
    QString spent = ui->pamountLine->text();
    QString note = ui->noteEdit->toPlainText();

    query.prepare("UPDATE Paychecks "
                  "SET Date = :date, "
                  "    Amount = :spent, "
                  "    Note = :note "
                  "WHERE Date = :date");

    query.bindValue(":date", date);
    query.bindValue(":spent", spent);
    query.bindValue(":note", note);

    if(!query.exec())
        qDebug() << query.lastError();
    refreshPaychecks();
    refreshEarnings();
}

void finance_page::deletePaycheck() {
    QSqlQuery query, earnings;
    QString date = ui->pdateLine->text();
    QString spent = ui->pamountLine->text();
    query.prepare("DELETE FROM Paychecks WHERE Date = '" + date + "' AND Amount = '" + spent + "';");

    if(!query.exec())
        qDebug() << query.lastError();

    earnings.prepare("DELETE FROM Earnings WHERE Date = '" + date + "';");

    if(!earnings.exec())
        qDebug() << earnings.lastError();

    refreshPaychecks();
    refreshEarnings();
}

void finance_page::refreshEarnings() {
    QSqlQuery query, query1, temp;
    double spending, saving;
    query.exec("SELECT ((SELECT Sum(Earnings.Spending) FROM Earnings) - (SELECT Sum(Purchases.Spent) FROM Purchases))");

    while(query.next())
        spending = query.value(0).toDouble();

    query1.exec("SELECT Sum(Earnings.Saving) FROM Earnings");

    while (query1.next())
        saving = query1.value(0).toDouble();


    if (spending == 0)
        temp.exec("SELECT Sum(Earnings.Spending) FROM EARNINGS");

    while(temp.next())
        spending = temp.value(0).toDouble();


    ui->spendingLine->setText(QString::number(spending, 'f', 2));
    ui->savingsLine->setText(QString::number(saving, 'f', 2));
}

void finance_page::paychecksClicked(const QModelIndex &index) {
    QSqlQuery query;
    QString val = ui->paycheckTable->model()->data(index).toString();

    query.prepare("SELECT * FROM Paychecks WHERE Date = '" + val + "';");

    if(!query.exec())
        qDebug() << query.lastError();

    else {
        while(query.next()) {
            ui->pdateLine->setText(query.value(0).toString());
            ui->pamountLine->setText(query.value(1).toString());
            ui->noteEdit->setText(query.value(2).toString());
        }
    }
}
