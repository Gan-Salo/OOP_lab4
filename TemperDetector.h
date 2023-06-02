#pragma once
#include <iostream>
#include "Measurer.h"

class TemperDetector : public Measurer {
public:
	float temperature;
	TemperDetector() {}
	void addTemperDet();
	void doMeasure();
	virtual ~TemperDetector() {}
};