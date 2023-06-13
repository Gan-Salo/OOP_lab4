#pragma once
#include "MilkProduct.h"
#include <iostream>

using namespace std;
//Конкретный посетитель проверки качества молочной продукции
class MilkQualityVisitor : public QualityVisitor{
public:
    void visit(MilkProduct* product);
};
