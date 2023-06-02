#pragma once
#include "Ration.h"

//Конкретный класс "Рацион" для коров
class CowRation : public Ration {
public:
    CowRation(double weight) : Ration("Коров", weight) {}
    void createRation();
};

