#pragma once
#include "Ration.h"

//���������� ����� "������" ��� ������
class PigRation : public Ration {
public:
    PigRation(double weight) : Ration("������", weight) {}
    void createRation();
};

