#pragma once
#include "Product.h"
#include <iostream>

using namespace std;
// онкретный класс молочного продукта
class MilkProduct : public Product {
public:
    void accept(QualityVisitor* visitor);
    void checkFatContent();
};

