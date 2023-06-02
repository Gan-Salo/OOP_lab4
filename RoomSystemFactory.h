#pragma once
#include "WaterFillingSystem.h"
#include "FeedingSystem.h"

//јбстрактна€ фабрика дл€ создани€ систем в помещении
class RoomSystemFactory{
public:
    virtual WaterFillingSystem* createWaterFillingSystem() = 0;
    virtual FeedingSystem* createFeedingSystem() = 0;
};

