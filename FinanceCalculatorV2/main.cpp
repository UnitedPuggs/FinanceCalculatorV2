#include "login_screen.h"
#include "finance_page.h"
#include "database.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    database db;
    db.createDatabase();

    /*
     * Aight, so this is kind of scuffed, but I'll try my best to
     * explain it for anyone that's actually looking at my code for some reason
     * that's not me.
     *
     * Basically, I wanted to make it an --option-- for users to have an extra layer of security.
     * For some reason, it really didn't like me creating the objects and then showing them within
     * the if-else statement and it's also 2am and I'm bored so this is half-botched.
     * Instead, I created the objects beforehand and if activated was whatever then it went to that part in the
     * if-else shit. Yeah yeah, I know it's not great for memory allocation and whatever and I wanted to avoid that, but
     * I mean honestly this is the best solution I've got for now /shrug.
     */
    QSqlQuery query;
    int activated = 0;
    query.exec("SELECT Activated FROM Details"); //for some reason started working????
    //oh shit wait, this is totally botched isn't it? I'm not preparing shit, just executing some SQL yikes
    while(query.next())
        activated = query.value(0).toInt();
    if(!query.exec())
        qDebug() << query.lastError();
    login_screen screen;
    finance_page page;
    if(activated == 0)
        page.show();
    else if(activated == 1)
        screen.show();

    return a.exec();
}
