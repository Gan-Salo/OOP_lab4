#include "EggsProduct.h"

void EggsProduct::accept(QualityVisitor* visitor) {
    visitor->visit(this);
}

void EggsProduct::checkShellStrength() {
    cout << "�������� ��������� �������� � ������� ��������" << std::endl;
}