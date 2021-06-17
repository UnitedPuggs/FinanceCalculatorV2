#ifndef LOGIN_SCREEN_H
#define LOGIN_SCREEN_H

#include <QMainWindow>
#include "header.h"
#include "finance_page.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login_screen; }
QT_END_NAMESPACE

class login_screen : public QMainWindow
{
    Q_OBJECT

public:
    login_screen(QWidget *parent = nullptr);
    ~login_screen();

private slots:
    void login();
private:
    void a();
    bool o(QString, QString);
    Ui::login_screen *ui;
    finance_page *finance;
};
#endif // LOGIN_SCREEN_H
