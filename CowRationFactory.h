#pragma once
#include "RationFactory.h"
#include "CowRation.h"

//���������� ����� ������� ��� ������� �����
class CowRationFactory : public RationFactory{
public:
    CowRation* createRation(double weight);
};
