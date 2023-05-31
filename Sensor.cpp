#include "Sensor.h"

Sensor::Sensor(string codename, string type) {
	this->codename = codename;
	this->type = type;
}

void Sensor::getMeasure(Measurer* newMeasure) {
	newMeasure->doMeasure();
}