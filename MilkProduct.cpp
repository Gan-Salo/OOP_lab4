#include "MilkProduct.h"

void MilkProduct::accept(QualityVisitor* visitor) {
    visitor->visit(this);
}

void MilkProduct::checkFatContent() {
    cout << "�������� ���������� ���� � �������� ��������" << std::endl;
}