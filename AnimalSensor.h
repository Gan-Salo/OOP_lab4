#pragma once
#include <iostream>
#include "Measurer.h"

using namespace std;
// ��������� ������� ��� ����� ������ � ��������
class AnimalSensor
{
public:
	AnimalSensor() = default;
	virtual void collectData() = 0;
	virtual void dotempMeasure() = 0;
	virtual void getlocation() = 0;
};