#include "PigRationFactory.h"

PigRation* PigRationFactory::createRation(double weight) {
    return new PigRation(weight);
}