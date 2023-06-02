#pragma once
#include "RoomSystemFactory.h"
#include "RobotWaterFillingSystem.h"
#include "ConvWaterSystem.h"
#include "RobotFeedingSystem.h"
#include "ConvFeedingSystem.h"
#include <iostream>

using namespace std;
//���������� ������� ��� �������� ��������� � ������� ���������� ������ 
class ConcreteRoomSysFactory : public RoomSystemFactory{
public:
    WaterFillingSystem* createWaterFillingSystem() {
        return new ConvWaterSystem();
    }

    FeedingSystem* createFeedingSystem() {
        return new RobotFeedingSystem();
    }
};
