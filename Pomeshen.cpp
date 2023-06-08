#include "Pomeshen.h"

Pomeshen::Pomeshen(string name) {
	this->name = name;
}
Pomeshen::Pomeshen(string name, double area) {
	this->name = name;
	this->area = area;
}

Pomeshen::~Pomeshen() {
    for (Sensor* sensor : sensors) {
        delete sensor;
    }
    sensors.clear();
}

Pomeshen* Pomeshen::Clone() {
    return new Pomeshen(*this);
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

string Pomeshen::GetName() {
    return name;
}

double Pomeshen::GetArea() {
    return area;
}

void Pomeshen::SetArea(double newarea) {
    area = newarea;
}

void Pomeshen::SetName(string newname) {
    name = newname;
}

void Pomeshen::SetSensorRequire(int temperatureCount, int humidityCount, int gasCount) {
    temperatureSensorCount = temperatureCount;
    humiditySensorCount = humidityCount;
    gasSensorCount = gasCount;
}

void Pomeshen::SetVentilationRequire(int count) {
    ventilationCount = count;
}

void Pomeshen::SetHeatingRequire(int count) {
    heatingCount = count;
}

void Pomeshen::DisplaySensorRequire() {
    std::cout << "Требуется датчиков температуры: " << temperatureSensorCount << std::endl;
    std::cout << "Требуется датчиков влажности: " << humiditySensorCount << std::endl;
    std::cout << "Требуется датчиков концентрации газа: " << gasSensorCount << std::endl;
}

void Pomeshen::DisplayVentilationRequire() {
    std::cout << "Требуется вентиляционных агрегатов: " << ventilationCount << std::endl;
}

void Pomeshen::DisplayHeatingRequire() {
    std::cout << "Требуется обогревательных агрегатов: " << heatingCount << std::endl;
}

void Pomeshen::ResetObject() {
    // Сброс всех данных объекта в начальное состояние
    sensors.clear();
    temperatureSensorCount = 0;
    humiditySensorCount = 0;
    gasSensorCount = 0;
    ventilationCount = 0;
    heatingCount = 0;
}