#include "ConcreteClimateSysBuilder.h"

ConcreteClimateSysBuilder::~ConcreteClimateSysBuilder() {
    delete temperatureSensor;
    delete humiditySensor;
    delete gasSensor;
    delete ventilationSystem;
    delete heatingSystem;
}

void ConcreteClimateSysBuilder::addTemperDet() {
    temperatureSensor = new TemperDetector();
    temperatureSensor->addTemperDet();
}

void ConcreteClimateSysBuilder::addHumidDet() {
    humiditySensor = new HumidDetector();
    humiditySensor->addHumidDet();
}

void ConcreteClimateSysBuilder::addGasDet() {
    gasSensor = new GasDetector();
    gasSensor->addGasDet();
}

void ConcreteClimateSysBuilder::addVentilSystem() {
    ventilationSystem = new VentilationSystem();
    ventilationSystem->addVentilSystem();
}

void ConcreteClimateSysBuilder::addHeatingSystem() {
    heatingSystem = new HeatingSystem();
    heatingSystem->addHeatingSystem();
}