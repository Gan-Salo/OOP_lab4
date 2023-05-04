#pragma once
#include <string>
#include <iostream>
#include <list>
#include "Sensor.h"
using namespace std;

class Pomeshen
{
protected:	
	list<Sensor*> sensors;
public:
	string name;
	Pomeshen() = default;
	Pomeshen(string name) {
		this->name = name;

	}
	void AddSensor(Sensor* sensor)
	{
		sensors.push_back(sensor);
	}
	void RemoveSensor(Sensor* sensor)
	{
		sensors.remove(sensor);
	}
	void DisplaySensors() {
		for (list<Sensor*>::iterator iter = sensors.begin(); iter != sensors.end(); iter++)
			cout << (*iter)->codename << ", " << (*iter)->type << ".\n";
		cout << std::endl;
	}
	//virtual void Display() = 0;
	//virtual void Composite() = 0;
};

