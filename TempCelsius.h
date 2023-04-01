#pragma once
#include "TemperDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include <random>

using namespace std;

class TempCelsius : public TemperDetector {
public:
	void doMeasure() {
		srand(static_cast <unsigned> (time(0)));
		temperature = -30 + rand() % 60;
		cout << temperature << " C*" << endl;
	}
private:
	float temperature;
};

