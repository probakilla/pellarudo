#ifndef PELLARUDO_H
#define PELLARUDO_H

#include <QMainWindow>

namespace Ui {
class pellarudo;
}

class pellarudo : public QMainWindow
{
    Q_OBJECT

public:
    explicit pellarudo(QWidget *parent = 0);
    ~pellarudo();

private:
    Ui::pellarudo *ui;
};

#endif // PELLARUDO_H
