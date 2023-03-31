#pragma once
#include <iostream>
#include "Measurer.h"


class TemperDetector: public Measurer {
public:
	void doMeasure() {
		printf("Temperature measure");
	}
private:
};