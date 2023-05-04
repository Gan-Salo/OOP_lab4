#include "Premixes.h"
#include <iostream>
#include <string>

std::string Premixes::getDescriprion() {
    return std::string("Premixes with ") + food->getDescription();
}