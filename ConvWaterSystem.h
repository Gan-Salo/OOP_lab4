#pragma once
#include "WaterFillingSystem.h"
#include <iostream>

using namespace std;
//���������� ����� ���������� ��� ��������� ����
class ConvWaterSystem : public WaterFillingSystem{
public:
    void fillWater();
};