#pragma once
#include <iostream>
#include "Measurer.h"
#include "AnimalSensor.h"

class SensAdapter
{
private:
	AnimalSensor* animalSensor;
public:
	virtual void doMeasure() {
		animalSensor->dotempMeasure();
	}
	virtual void getlocation() {
		animalSensor->getlocation();
	}
	SensAdapter(AnimalSensor* anSens) { animalSensor = anSens; }
};

