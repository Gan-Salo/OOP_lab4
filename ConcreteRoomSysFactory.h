#pragma once
#include "RoomSystemFactory.h"
#include "RobotWaterFillingSystem.h"
#include "ConvWaterSystem.h"
#include "RobotFeedingSystem.h"
#include "ConvFeedingSystem.h"
#include <iostream>

using namespace std;
//Конкретная фабрика для создания помещения с разными вариантами систем 
class ConcreteRoomSysFactory : public RoomSystemFactory{
public:
    WaterFillingSystem* createWaterFillingSystem() {
        return new ConvWaterSystem();
    }

    FeedingSystem* createFeedingSystem() {
        return new RobotFeedingSystem();
    }
};
