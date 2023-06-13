#pragma once
#include "AnimalSensor.h"
#include <iostream>
#include <list>

using namespace std;
//  ласс, представл€ющий менеджера данных животных на ферме
class AnimalDataManager {
private:
    list<AnimalSensor*> sensors;

public:
    void addSensor(AnimalSensor* sensor);
    void collectDataFromAllSensors();
};

