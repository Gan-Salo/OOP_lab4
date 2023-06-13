#pragma once
#include "AnimalSensor.h"
//  ласс, представл€ющий сенсорное устройство дл€ сбора данных о курицах
class ChickenSensor : public AnimalSensor {
public:
    void collectData();
    void dotempMeasure();
    void getlocation();
};