#pragma once
#include <iostream>
#include "TemperDetector.h"
#include "AnimalSensor.h"
#include "CowSensor.h"

class SensAdapter : public TemperDetector
{
private:
	AnimalSensor* animalSensor;
public:
	virtual void doMeasure() {
		animalSensor->dotempMeasure();
		animalSensor->getlocation();
	}

	SensAdapter() { animalSensor = new CowSensor(); }
	~SensAdapter() { delete animalSensor; }
};

