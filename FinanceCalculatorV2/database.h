#ifndef DATABASE_H
#define DATABASE_H
#include "header.h"
class database {
public:
    database();
    void createDatabase();
private:
    QSqlDatabase db;
};

#endif // DATABASE_H
