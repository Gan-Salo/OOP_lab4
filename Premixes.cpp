#include "Premixes.h"
#include <iostream>
#include <string>

using namespace std;

string Premixes::doSpread() {

    return food->doSpread() + string(" with Premixes");
}