#include "TemperDetector.h"

void TemperDetector::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	temperature = 10 + rand() % 30 - 5;
	cout << "����������� �������: " << temperature << " *C" << endl;
}

void TemperDetector::addTemperDet() {
	std::cout << "���������� ������� ��������� �����������" << std::endl;
}