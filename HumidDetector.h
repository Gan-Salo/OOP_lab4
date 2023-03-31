#pragma once
#include <iostream>
#include "Measurer.h"


class HumidDetector : public Measurer {
public:
	void doMeasure() {
		printf("Humid measure");
	}
private:
};