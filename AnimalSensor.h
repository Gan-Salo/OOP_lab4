#pragma once
#include <iostream>
#include "Measurer.h"
#include "AnimalSensor.h"
class AnimalSensor
{
public:
	AnimalSensor() = default;
	void dotempMeasure() {
		printf("Temperature of animal measure");
	}
	void getlocation() {
		printf("Coordinates of animal: N 60.590133, E 30.11045 ");
	}
};




