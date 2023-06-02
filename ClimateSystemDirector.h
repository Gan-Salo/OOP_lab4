#pragma once
#include "ClimateSystemBuilder.h"

// Директор, который управляет процессом построения системы микроклимата
class ClimateSystemDirector{
private:
    ClimateSystemBuilder * builder;

public:
    ClimateSystemDirector(ClimateSystemBuilder* builder) : builder(builder) {}

    void construct() {
        builder->addTemperDet();
        builder->addHumidDet();
        builder->addGasDet();
        builder->addVentilSystem();
        builder->addHeatingSystem();
    }
};
