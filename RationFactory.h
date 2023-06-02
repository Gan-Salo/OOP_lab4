#pragma once
#include "Ration.h"

//Реализация фабричного метода для рациона
class RationFactory{
public:
    virtual Ration* createRation(double weight) = 0;
};

