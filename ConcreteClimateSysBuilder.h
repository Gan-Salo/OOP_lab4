#pragma once
#include "ClimateSystemBuilder.h"

// ���������� ��������� ��� ������� ������������
class ConcreteClimateSysBuilder : public ClimateSystemBuilder {
public:
    ~ConcreteClimateSysBuilder();
    void addTemperDet();
    void addHumidDet();
    void addGasDet();
    void addVentilSystem();
    void addHeatingSystem();
};

