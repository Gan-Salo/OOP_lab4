#pragma once
#include "Product.h"
#include <iostream>

using namespace std;
//���������� ����� ������� ��������
class EggsProduct : public Product {
public:
    void accept(QualityVisitor* visitor);
    void checkShellStrength();
};

