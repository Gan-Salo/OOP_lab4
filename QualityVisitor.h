#pragma once

class MilkProduct;
class EggsProduct;

//Абстрактный класс-посетитель
class QualityVisitor {
public:
    virtual void visit(MilkProduct* product) {}
    virtual void visit(EggsProduct* product) {}
};
