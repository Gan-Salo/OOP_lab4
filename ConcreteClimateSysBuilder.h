#pragma once
#include "ClimateSystemBuilder.h"

// ���������� ��������� ��� ������� ������������
class ConcreteClimateSysBuilder : public ClimateSystemBuilder {
public:
    void addTemperDet() {
        temperatureSensor.addTemperDet();
    }

    void addHumidDet() {
        humiditySensor.addHumidDet();
    }

    void addGasDet() {
        gasSensor.addGasDet();
    }

    void addVentilSystem() {
        ventilationSystem.addVentilSystem();
    }

    void addHeatingSystem() {
        heatingSystem.addHeatingSystem();
    }
};

