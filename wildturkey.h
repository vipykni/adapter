#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include "turkey.h"

class WildTurkey : public Turkey
{
public:
    WildTurkey();
    virtual void gobble();
    virtual void fly();
};

#endif // WILDTURKEY_H
