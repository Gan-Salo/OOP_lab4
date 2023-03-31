#pragma once
#include "Measurer.h"

class Sensor {
public:
	void getMeasure(Measurer* newMeasure) {
		newMeasure->doMeasure();
	}
private:
	
};