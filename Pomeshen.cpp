#include "Pomeshen.h"

Pomeshen::Pomeshen(string name) {
	this->name = name;
}

void Pomeshen::AddSensor(Sensor* sensor)
{
	sensors.push_back(sensor);
}

void Pomeshen::RemoveSensor(Sensor* sensor)
{
	sensors.remove(sensor);
}

void Pomeshen::DisplaySensors() {
	for (list<Sensor*>::iterator iter = sensors.begin(); iter != sensors.end(); iter++)
		cout << "Датчик: " << (*iter)->codename << ", " << (*iter)->type << ".\n";
	cout << std::endl;
}