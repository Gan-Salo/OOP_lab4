#pragma once
#include "WaterFillingSystem.h"
#include <iostream>

using namespace std;
//Конкретный класс компонента для наливания воды
class RobotWaterFillingSystem : public WaterFillingSystem{
public:
    void fillWater();
};

