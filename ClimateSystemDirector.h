#pragma once
#include "ClimateSystemBuilder.h"

// Директор, который управляет процессом построения системы микроклимата
class ClimateSystemDirector {
private:
    ClimateSystemBuilder *builder;

public:
    ClimateSystemDirector(ClimateSystemBuilder* mybuilder);
    void construct();
};
