#pragma once
#include "RationFactory.h"
#include "PigRation.h"

//���������� ����� ������� ��� ������� ������
class PigRationFactory : public RationFactory{
public:
    PigRation* createRation(double weight);
};

