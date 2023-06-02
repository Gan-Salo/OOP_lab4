#include "CowRationFactory.h"

CowRation* CowRationFactory::createRation(double weight) {
    return new CowRation(weight);
}