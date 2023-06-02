#include "HumidDetector.h"
HumidDetector::HumidDetector() {}

HumidDetector::HumidDetector(MessageSender* sender) {
	messageSender = sender;
}

void HumidDetector::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	humidity = 0 + rand() % 100;
	cout << "Влажность воздуха: " << humidity << " %" << endl;
}

void HumidDetector::addHumidDet() {
	std::cout << "Добавление датчика измерения влажности" << std::endl;
}