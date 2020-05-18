#include "login_screen.h"
#include "database.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    database db;
    db.createDatabase();
    login_screen w;
    w.show();
    return a.exec();
}
