#pragma once
#include "Product.h"
#include <iostream>

using namespace std;
//���������� ����� ��������� ��������
class MilkProduct : public Product {
public:
    void accept(QualityVisitor* visitor);
    void checkFatContent();
};

