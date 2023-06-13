#include "EggsQualityVisitor.h"

void EggsQualityVisitor::visit(EggsProduct* product) {
    product->checkShellStrength();
}