#pragma once
#include "Ration.h"

//Конкретный класс "Рацион" для свиней
class PigRation : public Ration {
public:
    PigRation(double weight) : Ration("Свиней", weight) {}
    void createRation();
};

