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
	string name;
	double area;
	int temperatureSensorCount;
	int humiditySensorCount;
	int gasSensorCount;
	int ventilationCount;
	int heatingCount;
public:
	
	
	Pomeshen() = default;
	~Pomeshen();
	Pomeshen* Clone();
	Pomeshen(string name);
	Pomeshen(string name, double area);
	void AddSensor(Sensor* sensor);
	void RemoveSensor(Sensor* sensor);
	void DisplaySensors();
	void SetArea(double newarea);
	void SetName(string newname); 
	double GetArea();
	string GetName();
	void SetSensorRequire(int temperatureCount, int humidityCount, int gasCount);
	void SetVentilationRequire(int count);
	void SetHeatingRequire(int count);
	void DisplayHeatingRequire();
	void DisplayVentilationRequire();
	void DisplaySensorRequire();
	void ResetObject();
};

