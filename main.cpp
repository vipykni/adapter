#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MallardDuck *duck = new MallardDuck();

    return a.exec();
}
