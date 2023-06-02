#pragma once
#include "RationFactory.h"
#include "PigRation.h"

// онкретный класс фабрики дл€ рациона свиней
class PigRationFactory : public RationFactory{
public:
    PigRation* createRation(double weight);
};

