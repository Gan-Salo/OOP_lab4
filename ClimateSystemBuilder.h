#pragma once
#include "TemperDetector.h"
#include "HumidDetector.h"
#include "GasDetector.h"
#include "VentilationSystem.h"
#include "HeatingSystem.h"

// Класс-строитель системы микроклимата
class ClimateSystemBuilder{
protected:
    TemperDetector* temperatureSensor;
    HumidDetector* humiditySensor;
    GasDetector* gasSensor;
    VentilationSystem* ventilationSystem;
    HeatingSystem* heatingSystem;

public:
    ~ClimateSystemBuilder();
    virtual void addTemperDet() = 0;
    virtual void addHumidDet() = 0;
    virtual void addGasDet() = 0;
    virtual void addVentilSystem() = 0;
    virtual void addHeatingSystem() = 0;
};