#pragma once

class MilkProduct;
class EggsProduct;

//����������� �����-����������
class QualityVisitor {
public:
    virtual void visit(MilkProduct* product) {}
    virtual void visit(EggsProduct* product) {}
};
