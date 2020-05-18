#include "database.h"

database::database() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    QFileInfo base("database.sqlite");
    QString DB_PATH = base.absoluteFilePath();
    qDebug() << DB_PATH;
    db.setDatabaseName(DB_PATH);
    db.open();
}

void database::createDatabase() {
    QSqlQuery query;
    query.exec("CREATE TABLE Purchases("
               "Date  VARCHAR(10),"
               "Item  VARCHAR(100),"
               "Spent INTEGER NOT NULL,"
               "Note  TEXT);");

    query.exec("CREATE TABLE Paychecks("
               "Date   VARCHAR(10),"
               "Amount INTEGER NOT NULL,"
               "Note   TEXT);");
}
