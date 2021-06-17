#include "login_screen.h"
#include "ui_login_screen.h"
#include "header.h"
#include <QMessageBox>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <stdio.h>
#include <iostream>

login_screen::login_screen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login_screen)
{
    ui->setupUi(this);
}

login_screen::~login_screen()
{
    delete ui;
}

void login_screen::login() {
    QString z = ui->ul->text();
    QString v = ui->pl->text();

    if (z == "test" && v == "test") {
        finance = new finance_page;
        finance->show();
        //a();
        ui->ul->setText("");
        ui->pl->setText("");
        this->hide();
    }
    else {
       // a();
        QMessageBox::warning(this, "Fail!", "The username or password entered was invalid!");
    }
}

void login_screen::a() {
    QSqlQuery q;
    srand(time(NULL));
    std::vector<int> s, m;
    QString x = ui->ul->text();
    QString b = ui->pl->text();

    for(int i = 0; i < x.length(); ++i) {
        //instead of going based off of what I have here already
        //why not just set it to be whatever between 33 and 126 and then calculate a shift?
        //maybe that's less secure, dunno?
        int ao = rand() % (254 - x.at(i).unicode());
        if (x.at(i).unicode() + ao == 127) {
                
        } else {
            x[i] = x.at(i).toLatin1() + ao;
        }
        s.push_back(ao);
    }

    for(int i = 0; i < b.length(); ++i) {
        int op = rand() % (126 - b.at(i).unicode());
        b[i] = b.at(i).toLatin1() + op;
        m.push_back(op);
    }
    std::string aa = "", lo = "";
    for(unsigned int i = 0; i < s.size(); ++i)
        aa += std::to_string(s[i]) + " ";

    for(unsigned int i = 0; i < m.size(); ++i)
        lo += std::to_string(m[i]) + " ";
    //maybe I should include the ability to make an initial username and password
//    q.prepare("INSERT INTO Details(Username, Password, Bonk, Honk) VALUES(:un, :pass, :b, :h)");
//    q.bindValue(":un", QString::fromStdString(x));
//    q.bindValue(":pass", QString::fromStdString(b));
//    q.bindValue(":b", QString::fromStdString(aa));
//    q.bindValue(":h", QString::fromStdString(lo));
//    qDebug() << "QSTRINGS " + QString::fromStdString(x) + " " + QString::fromStdString(b);
//    std::cout << "STD::STRINGS " + x + " " + b << std::endl;
    q.prepare("UPDATE Details SET Username = '" + x + "', Password = '" + b + "', Bonk = '" + QString::fromStdString(aa) + "', Honk = '" + QString::fromStdString(lo) + "'");
    if(!q.exec())
        qDebug() << q.lastError();

}

bool login_screen::o(QString one, QString two) {//gotta make this equal to make sure
    QSqlQuery g;
    QString n, k, l, p;
    std::vector<int> f, j;

    g.prepare("SELECT * FROM Details");

    if(!g.exec())
        qDebug() << g.lastError();

    while(g.next()) {
        n = g.value(0).toString();
        k = g.value(1).toString();
        l = g.value(2).toString();
        p = g.value(3).toString();
    }
    std::string u = l.toStdString(), w = p.toStdString(), d;
    for(int i = 0; i < l.size(); ++i) {
        if(u[i] != ' ')
            d += u[i];
        else {
            f.push_back(stoi(d));
            d = "";
        }
    }
    d = "";
    for(int i = 0; i < p.size(); ++i) {
        if(w[i] != ' ')
            d += w[i];
        else {
            j.push_back(stoi(d));
            d = "";
        }
    }
    //std::string q = n.toStdString();
    for(int i = 0; i < n.size(); ++i) {
        n[i] = n.at(i).toLatin1() - f[i];
    }
    //std::string y = k.toStdString();
    for(int i = 0; i < k.size(); ++i) {
        k[i] = k.at(i).toLatin1() - j[i];
    }

//    QString bu = QString::fromStdString(q);
//    QString bw = QString::fromStdString(y);
    qDebug() << n + " " + one;
    qDebug() << k + " " + two;
    if(n == one && k == two)
        return true;
    else
        return false;
}
