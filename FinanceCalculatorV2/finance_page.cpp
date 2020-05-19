#include "finance_page.h"
#include "ui_finance_page.h"
#include "header.h"

finance_page::finance_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::finance_page) {
    ui->setupUi(this);

    refreshPurchases();
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

}

void finance_page::accountSettings() {

}
