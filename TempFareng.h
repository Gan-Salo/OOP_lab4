#pragma once
#include "TemperDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include <random>

using namespace std;

class TempFareng : public TemperDetector {
public:	
	
	float temperature;
	void doMeasure();
}; 


