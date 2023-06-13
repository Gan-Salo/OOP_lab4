#include "MilkProduct.h"

void MilkProduct::accept(QualityVisitor* visitor) {
    visitor->visit(this);
}

void MilkProduct::checkFatContent() {
    cout << "ѕроверка содержани€ жира в молочном продукте" << std::endl;
}