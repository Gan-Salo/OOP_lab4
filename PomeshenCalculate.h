#pragma once
#include "Pomeshen.h"

class PomeshenCalculate
{
public:
    static void CalculateRequire(Pomeshen* pomeshen) {
        double area = pomeshen->GetArea();

        // Расчет количества датчиков
        int temperatureSensorCount = static_cast<int>(area / 100);
        int humiditySensorCount = static_cast<int>(area / 120);
        int gasSensorCount = static_cast<int>(area / 120);

        // Расчет количества вентиляционных агрегатов
        int ventilationCount = static_cast<int>(area / 250);

        // Расчет количества обогревательных агрегатов
        int heatingCount = static_cast<int>(area / 250);

        // Установка рассчитанных значений в объект Pomeshen
        pomeshen->SetSensorRequire(temperatureSensorCount, humiditySensorCount, gasSensorCount);
        pomeshen->SetVentilationRequire(ventilationCount);
        pomeshen->SetHeatingRequire(heatingCount);
    }
};

