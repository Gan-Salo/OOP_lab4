#pragma once
#include "TemperDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include <random>

using namespace std;

class TempCelsius : public TemperDetector {
public:
	/*TempCelsius(string c) : TemperDetector(c) {
		codename = c;
	}*/
	void doMeasure() {
		srand(static_cast <unsigned> (time(0)));
		temperature = -30 + rand() % 60;
		cout << temperature << " C*" << endl;
	}
private:
	//string codename;
	float temperature;
};

