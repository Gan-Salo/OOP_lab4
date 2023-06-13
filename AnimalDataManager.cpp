#include "AnimalDataManager.h"

void AnimalDataManager::addSensor(AnimalSensor* sensor) {
    sensors.push_back(sensor);
}

void AnimalDataManager::collectDataFromAllSensors() {
    for (AnimalSensor* sensor : sensors) {
        sensor->collectData();
    }
}