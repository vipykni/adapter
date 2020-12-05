#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"

class MallardDuck : public duck
{
public:
    MallardDuck();
    virtual void quack();
    virtual void fly();
};

#endif // MALLARDDUCK_H
