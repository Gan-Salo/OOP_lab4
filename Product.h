#pragma once
#include "QualityVisitor.h"

//����������� ����� ���������
class Product {
public:
    virtual void accept(QualityVisitor* visitor) = 0;
};

