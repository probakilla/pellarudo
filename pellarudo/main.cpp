#include "pellarudo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pellarudo w;
    w.show();

    return a.exec();
}
