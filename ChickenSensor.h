#pragma once
#include "AnimalSensor.h"
// �����, �������������� ��������� ���������� ��� ����� ������ � �������
class ChickenSensor : public AnimalSensor {
public:
    void collectData();
    void dotempMeasure();
    void getlocation();
};