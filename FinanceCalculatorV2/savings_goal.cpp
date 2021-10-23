#include "savings_goal.h"
#include "header.h"
#include "ui_savings_goal.h"
#include <QObject>

savings_goal::savings_goal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::savings_goal)
{
    ui->setupUi(this);
}

savings_goal::~savings_goal() {
    delete ui;
}

void savings_goal::emitGoalSignal() {
    setSavingsGoal("");
}
void savings_goal::setSavingsGoal(QString str) {
    str = ui->savingsLine->text();
    emit setGoalLine(str);
    ui->savingsLine->setText("");
}
