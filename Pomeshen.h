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
	double area;
	int temperatureSensorCount;
	int humiditySensorCount;
	int gasSensorCount;
	int ventilationCount;
	int heatingCount;
public:
	string name;
	
	Pomeshen() = default;
	~Pomeshen();
	Pomeshen* Clone();
	Pomeshen(string name);
	Pomeshen(string name, double area);
	void AddSensor(Sensor* sensor);
	void RemoveSensor(Sensor* sensor);
	void DisplaySensors();
	double GetArea();
	void SetSensorRequire(int temperatureCount, int humidityCount, int gasCount);
	void SetVentilationRequire(int count);
	void SetHeatingRequire(int count);
	void DisplayHeatingRequire();
	void DisplayVentilationRequire();
	void DisplaySensorRequire();
	void ResetObject();
};

