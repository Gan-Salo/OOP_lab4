#pragma once
#include "QualityVisitor.h"

//Абстрактный класс продуктов
class Product {
public:
    virtual void accept(QualityVisitor* visitor) = 0;
};

