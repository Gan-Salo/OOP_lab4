#pragma once
#include "RationFactory.h"
#include "CowRation.h"

// онкретный класс фабрики дл€ рациона коров
class CowRationFactory : public RationFactory{
public:
    CowRation* createRation(double weight);
};
