#pragma once
#include "ClimateSystemBuilder.h"

// ��������, ������� ��������� ��������� ���������� ������� ������������
class ClimateSystemDirector {
private:
    ClimateSystemBuilder *builder;

public:
    ClimateSystemDirector(ClimateSystemBuilder* mybuilder);
    void construct();
};
