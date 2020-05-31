#include "login_screen.h"
#include "ui_login_screen.h"
#include "header.h"
#include <QMessageBox>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <stdio.h>

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

    if (o(z, v)) {
        finance = new finance_page;
        finance->show();
        a();
        ui->ul->setText("");
        ui->pl->setText("");
        this->hide();
    }
    else {
        a();
        QMessageBox::warning(this, "Fail!", "The username or password entered was invalid!");
    }
}

void login_screen::a() {
    QSqlQuery q;
    srand(time(NULL));
    std::vector<int> s, m;

    std::string x = ui->ul->text().toStdString();
    std::string b = ui->pl->text().toStdString();

    for(unsigned int i = 0; i < x.length(); ++i) {
        int ao = rand() % 12;
        x[i] = x[i] + ao;
        s.push_back(ao);
    }

    for(unsigned int i = 0; i < b.length(); ++i) {
        int op = rand() % 12;
        b[i] = b[i] + op;
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

    q.prepare("UPDATE Details SET Username = '" + QString::fromStdString(x) + "', Password = '" + QString::fromStdString(b) + "', Bonk = '" + QString::fromStdString(aa) + "', Honk = '" + QString::fromStdString(lo) + "'");
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
    std::string q = n.toStdString();
    for(int i = 0; i < n.size(); ++i) {
        q[i] = q[i] - f[i];
    }
    std::string y = k.toStdString();
    for(int i = 0; i < k.size(); ++i) {
        y[i] = y[i] - j[i];
    }

    QString bu = QString::fromStdString(q);
    QString bw = QString::fromStdString(y);
    qDebug() << bu;
    qDebug() << bw;
    if(bu == one && bw == two)
        return true;
    else
        return false;
}
