#include "Vitamines.h"
#include <iostream>
#include <string>

std::string Vitamines::getDescriprion() {
    return std::string("Vitamines with ") + food->getDescription();
}