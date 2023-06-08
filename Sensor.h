#pragma once
#include <string>
#include "Measurer.h"
using namespace std;

class Sensor {
public:
	//Measurer* measurer;
	string codename;
	string type;
	Sensor() = default;
	Sensor(string codename, string type);
	void getMeasure(Measurer* newMeasure);
};