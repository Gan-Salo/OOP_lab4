#pragma once
#include "AnimalSensor.h"
// ласс, представл€ющий сенсорное устройство дл€ сбора данных о коровах
class CowSensor : public AnimalSensor {
public:
    void collectData();
    void dotempMeasure();
    void getlocation();
};

