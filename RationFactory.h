#pragma once
#include "Ration.h"

//���������� ���������� ������ ��� �������
class RationFactory{
public:
    virtual Ration* createRation(double weight) = 0;
};

