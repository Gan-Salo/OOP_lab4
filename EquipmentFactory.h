#pragma once
#include "WaterFillingSystem.h"
#include "FeedingSystem.h"

//����������� ������� ��� �������� ������ � ���������
class EquipmentFactory
{
public:
    virtual WaterFillingSystem* createWaterFillingSystem() = 0;
    virtual FeedingSystem* createFeedingSystem() = 0;
};

