#pragma once
#include "EggsProduct.h"
#include <iostream>

using namespace std;
//���������� ���������� �������� �������� ������ ���������
class EggsQualityVisitor : public QualityVisitor{
public:
    void visit(EggsProduct* product);
};
