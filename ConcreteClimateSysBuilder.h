#pragma once
#include "ClimateSystemBuilder.h"

//  онкретный строитель дл€ системы микроклимата
class ConcreteClimateSysBuilder : public ClimateSystemBuilder {
public:
    ~ConcreteClimateSysBuilder();
    void addTemperDet();
    void addHumidDet();
    void addGasDet();
    void addVentilSystem();
    void addHeatingSystem();
};

