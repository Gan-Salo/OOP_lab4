#pragma once
#include "Pomeshen.h"

class PomeshenCalculate
{
public:
    static void CalculateRequire(Pomeshen* pomeshen) {
        double area = pomeshen->GetArea();

        // ������ ���������� ��������
        int temperatureSensorCount = static_cast<int>(area / 100);
        int humiditySensorCount = static_cast<int>(area / 120);
        int gasSensorCount = static_cast<int>(area / 120);

        // ������ ���������� �������������� ���������
        int ventilationCount = static_cast<int>(area / 250);

        // ������ ���������� ��������������� ���������
        int heatingCount = static_cast<int>(area / 250);

        // ��������� ������������ �������� � ������ Pomeshen
        pomeshen->SetSensorRequire(temperatureSensorCount, humiditySensorCount, gasSensorCount);
        pomeshen->SetVentilationRequire(ventilationCount);
        pomeshen->SetHeatingRequire(heatingCount);
    }
};

