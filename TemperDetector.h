#pragma once
#include <iostream>
#include <string>
#include "Measurer.h"

class TemperDetector : public Measurer {
public:
	float temperature;
	TemperDetector() {}
	void addTemperDet();
	void doMeasure();
	string doMeasurestr() {
		srand(static_cast <unsigned> (time(0)));
		temperature = 12 + rand() % 80 - 12;

		return string("Концентрация газа: ") + to_string(temperature) + string(" %");
	}
	virtual ~TemperDetector() {}
};