#include "database.h"

database::database() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    QFileInfo base("database.sqlite");
    QString DB_PATH = base.absoluteFilePath();
   // qDebug() << DB_PATH;
    db.setDatabaseName(DB_PATH);
    db.open();
}

void database::createDatabase() {
    QSqlQuery query;
    query.exec("CREATE TABLE Purchases("
               "Date  VARCHAR(10),"
               "Item  VARCHAR(100),"
               "Spent DECIMAL(7, 2) NOT NULL,"
               "Note  TEXT,"
               "UNIQUE(Date, Item));");

    query.exec("CREATE TABLE Paychecks("
               "Date   VARCHAR(10),"
               "Amount DECIMAL(7, 2) NOT NULL,"
               "Note   TEXT);");

    query.exec("CREATE TABLE Details("
               "Username VARCHAR(50),"
               "Password TEXT);");

    query.exec("CREATE TABLE Earnings("
               "Date     VARCHAR(10),"
               "Spending DECIMAL(7, 2) NOT NULL,"
               "Saving   DECIMAL(7, 2) NOT NULL);");
}
