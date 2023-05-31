#include "ProxyFareng.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include <random>

using namespace std;

ProxyFareng::ProxyFareng(TempFareng& TempDet) :
	detTemp(&TempDet) {}
	

void ProxyFareng::doMeasure() {
	cout << "Температура: " << ((detTemp->temperature - 32) * 5 / 9) << " *C" << endl;
}