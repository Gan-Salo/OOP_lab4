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
	Pomeshen(string name);
	void AddSensor(Sensor* sensor);
	void RemoveSensor(Sensor* sensor);
	void DisplaySensors();
};

