#include "GasDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>


using namespace std;

GasDetector::GasDetector() {}

GasDetector::GasDetector(MessageSender* sender) {
	messageSender = sender;
}
void GasDetector::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	gasconcentr = 12 + rand() % 80 - 12;
	cout << "Концентрация газа: " << gasconcentr << " %" << endl;
}
void GasDetector::addGasDet() {
	std::cout << "Добавление датчика измерения концентрации газа" << std::endl;
}

