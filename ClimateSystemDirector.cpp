#include "ClimateSystemDirector.h"

ClimateSystemDirector::ClimateSystemDirector(ClimateSystemBuilder* mybuilder) {
    builder = mybuilder;
}

void ClimateSystemDirector::construct() {
    builder->addTemperDet();
    builder->addHumidDet();
    builder->addGasDet();
    builder->addVentilSystem();
    builder->addHeatingSystem();
}