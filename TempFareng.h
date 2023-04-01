#pragma once
#include "TemperDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include <random>

using namespace std;

class TempFareng : public TemperDetector {
public:
	int temperature;
	void doMeasure() {
		srand(static_cast <unsigned> (time(0)));
		temperature = -30 + rand() % 60;
		cout << temperature << " F*" << endl;
	}
private:
	
}; 


