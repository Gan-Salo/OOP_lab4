#include "TemperDetector.h"

void TemperDetector::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	temperature = 10 + rand() % 30 - 5;
	cout << "Температура воздуха: " << temperature << " *C" << endl;
}

void TemperDetector::addTemperDet() {
	std::cout << "Добавление датчика измерения температуры" << std::endl;
}

string TemperDetector::doMeasurestr() {
	srand(static_cast <unsigned> (time(0)));
	temperature = 12 + rand() % 80 - 12;

	return string("Концентрация газа: ") + to_string(temperature) + string(" %");
}