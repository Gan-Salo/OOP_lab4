#pragma once
#include "EquipmentFactory.h"
#include "RobotWaterFillingSystem.h"
#include "ConvWaterSystem.h"
#include "RobotFeedingSystem.h"
#include "ConvFeedingSystem.h"
#include <iostream>

using namespace std;
//���������� ������� ��� �������� ��������� � ������� ���������� ������ 
class ConcreteEquipFactory : public EquipmentFactory {
public:
    WaterFillingSystem* createWaterFillingSystem() {
        return new ConvWaterSystem();
    }

    FeedingSystem* createFeedingSystem() {
        return new RobotFeedingSystem();
    }
};
