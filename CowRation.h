#pragma once
#include "Ration.h"

//���������� ����� "������" ��� �����
class CowRation : public Ration {
public:
    CowRation(double weight) : Ration("�����", weight) {}
    void createRation();
};

