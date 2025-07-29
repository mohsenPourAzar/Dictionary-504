#ifndef L1_H
#define L1_H

#include <QDialog>

namespace Ui {
class L1;
}

class L1 : public QDialog
{
    Q_OBJECT

public:
    explicit L1(QWidget *parent = nullptr);
    ~L1();

private:
    Ui::L1 *ui;
};

#endif // L1_H
