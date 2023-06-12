#include "ClimateSystemBuilder.h"

ClimateSystemBuilder::~ClimateSystemBuilder() {
    delete temperatureSensor;
    delete humiditySensor;
    delete gasSensor;
    delete ventilationSystem;
    delete heatingSystem;
}

void ClimateSystemBuilder::addTemperDet() {
    temperatureSensor = new TemperDetector();
    temperatureSensor->addTemperDet();
}

void ClimateSystemBuilder::addHumidDet() {
    humiditySensor = new HumidDetector();
    humiditySensor->addHumidDet();
}

void ClimateSystemBuilder::addGasDet() {
    gasSensor = new GasDetector();
    gasSensor->addGasDet();
}

void ClimateSystemBuilder::addVentilSystem() {
    ventilationSystem = new VentilationSystem();
    ventilationSystem->addVentilSystem();
}

void ClimateSystemBuilder::addHeatingSystem() {
    heatingSystem = new HeatingSystem();
    heatingSystem->addHeatingSystem();
}