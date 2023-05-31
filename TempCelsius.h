#pragma once
#include "TemperDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include <random>

using namespace std;

class TempCelsius : public TemperDetector {
public:
	void doMeasure();
private:
	float temperature;
};

