#pragma once
#include "AnimalSensor.h"
#include <iostream>
#include <list>

using namespace std;
// �����, �������������� ��������� ������ �������� �� �����
class AnimalDataManager {
private:
    list<AnimalSensor*> sensors;

public:
    void addSensor(AnimalSensor* sensor);
    void collectDataFromAllSensors();
};

