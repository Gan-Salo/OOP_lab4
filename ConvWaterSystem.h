#pragma once
#include "WaterFillingSystem.h"
#include <iostream>

using namespace std;
//Конкретный класс компонента для наливания воды
class ConvWaterSystem : public WaterFillingSystem{
public:
    void fillWater();
};