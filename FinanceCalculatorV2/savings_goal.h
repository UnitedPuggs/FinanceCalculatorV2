#ifndef SAVINGS_GOAL_H
#define SAVINGS_GOAL_H

#include <QDialog>

namespace Ui {
class savings_goal;
}

class savings_goal : public QDialog
{
    Q_OBJECT

public:
    explicit savings_goal(QWidget *parent = nullptr);
    ~savings_goal();
signals:
    void setGoalLine(QString);
public slots:
    void emitGoalSignal();
public:
    void setSavingsGoal(QString);
private:
    Ui::savings_goal *ui;
};

#endif // SAVINGS_GOAL_H
