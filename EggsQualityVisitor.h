#pragma once
#include "EggsProduct.h"
#include <iostream>

using namespace std;
//Конкретный посетитель проверки качества яичной продукции
class EggsQualityVisitor : public QualityVisitor{
public:
    void visit(EggsProduct* product);
};
