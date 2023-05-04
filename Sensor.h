#pragma once
#include <string>
#include "Measurer.h"
using namespace std;

class Sensor {
public:
	string codename;
	string type;
	Sensor() = default;
	Sensor(string codename, string type) {
		this->codename = codename;
		this->type = type;
	}

	/*void getName(Measurer* newMeasure) {
		newMeasure->getName();
	}*/

	void getType(Measurer* newMeasure) {
		
	}

	void getMeasure(Measurer* newMeasure) {
		newMeasure->doMeasure();
	}
private:
	
};