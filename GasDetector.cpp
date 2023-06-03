#include "GasDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>


using namespace std;

GasDetector::GasDetector() {}

GasDetector::GasDetector(MessageSender* sender) : Measurer(sender) {}

void GasDetector::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	gasconcentr = 0 + rand() % 80 - 12;
	cout << "������������ ����: " << gasconcentr << " %" << endl;
}


void GasDetector::addGasDet() {
	std::cout << "���������� ������� ��������� ������������ ����" << std::endl;
}

string GasDetector::doMeasurestr() {
	srand(static_cast <unsigned> (time(0)));
	gasconcentr = 12 + rand() % 80 - 12;

	return string("������������ ����: ") + to_string(gasconcentr) + string(" %");
}

void GasDetector::measureAndSend() {
	string data = this->doMeasurestr();
	messageSender->sendData(data);
}
