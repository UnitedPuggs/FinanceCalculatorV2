#include "login_screen.h"
#include "ui_login_screen.h"
#include <QMessageBox>

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
    QString username = ui->usernameLine->text();
    QString password = ui->passwordLine->text();

    if (username == "test" && password == "test") {
        finance = new finance_page;
        finance->show();
    }
    else {
        QMessageBox::warning(this, "Fail!", "The username or password entered was invalid!");
    }
}

