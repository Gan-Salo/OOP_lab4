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
	string doMeasurestr();
	virtual ~TemperDetector() {}
};