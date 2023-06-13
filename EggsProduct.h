#pragma once
#include "Product.h"
#include <iostream>

using namespace std;
//Конкретный класс яичного продукта
class EggsProduct : public Product {
public:
    void accept(QualityVisitor* visitor);
    void checkShellStrength();
};

