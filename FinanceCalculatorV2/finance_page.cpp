#include "finance_page.h"
#include "ui_finance_page.h"

finance_page::finance_page(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::finance_page)
{
    ui->setupUi(this);
}

finance_page::~finance_page()
{
    delete ui;
}
