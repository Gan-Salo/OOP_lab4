#include "MilkQualityVisitor.h"

void MilkQualityVisitor::visit(MilkProduct* product) {
	product->checkFatContent();
}
