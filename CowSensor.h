#pragma once
#include "AnimalSensor.h"
//�����, �������������� ��������� ���������� ��� ����� ������ � �������
class CowSensor : public AnimalSensor {
public:
    void collectData();
    void dotempMeasure();
    void getlocation();
};

