#include "Vitamines.h"
#include <iostream>
#include <string>
using namespace std;

std::string Vitamines::doSpread() {
    return food->doSpread() + string(" with Vitamines");
}