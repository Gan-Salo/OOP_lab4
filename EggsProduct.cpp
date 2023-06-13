#include "EggsProduct.h"

void EggsProduct::accept(QualityVisitor* visitor) {
    visitor->visit(this);
}

void EggsProduct::checkShellStrength() {
    cout << "Проверка прочности скорлупы у яичного продукта" << std::endl;
}