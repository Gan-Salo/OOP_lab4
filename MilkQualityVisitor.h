#pragma once
#include "MilkProduct.h"
#include <iostream>

using namespace std;
//���������� ���������� �������� �������� �������� ���������
class MilkQualityVisitor : public QualityVisitor{
public:
    void visit(MilkProduct* product);
};
