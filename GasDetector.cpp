#include "GasDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>


using namespace std;

GasDetector::GasDetector() {}

GasDetector::GasDetector(MessageSender* sender) : Measurer(sender) {}

void GasDetector::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	gasconcentr = 0 + rand() % 80;
	cout << "Концентрация газа: " << gasconcentr << " %" << endl;
	notifyObservers();
}

void GasDetector::addGasDet() {
	std::cout << "Добавление датчика измерения концентрации газа" << std::endl;
}

string GasDetector::doMeasurestr() {
	srand(static_cast <unsigned> (time(0)));
	gasconcentr = 0 + rand() % 80;
	return string("Концентрация газа: ") + to_string(gasconcentr) + string(" %");
}

void GasDetector::measureAndSend() {
	string data = this->doMeasurestr();
	messageSender->sendData(data);
}

void GasDetector::addObserver(Observer* observer) {
	observers.push_back(observer);
}

int GasDetector::getConcentr() {
	return gasconcentr;
}

void GasDetector::removeObserver(Observer* observer) {
	observers.remove(observer);
}

void GasDetector::notifyObservers() {
	for (Observer* observer : observers) {
		observer->update(gasconcentr);
	}
}