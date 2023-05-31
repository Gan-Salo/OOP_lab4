#pragma once
#include <string>
#include "Measurer.h"
using namespace std;

class Sensor {
public:
	string codename;
	string type;
	Sensor() = default;
	Sensor(string codename, string type);
	void getMeasure(Measurer* newMeasure);
};