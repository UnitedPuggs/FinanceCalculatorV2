#ifndef FINANCE_PAGE_H
#define FINANCE_PAGE_H
#include <QMainWindow>

namespace Ui {
class finance_page;
}

class finance_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit finance_page(QWidget *parent = nullptr);
    ~finance_page();

private:
    Ui::finance_page *ui;
};

#endif // FINANCE_PAGE_H
