#include "pellarudo.h"
#include "ui_pellarudo.h"

pellarudo::pellarudo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pellarudo)
{
    ui->setupUi(this);
}

pellarudo::~pellarudo()
{
    delete ui;
}
