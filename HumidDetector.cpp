#include "HumidDetector.h"
HumidDetector::HumidDetector() {}

HumidDetector::HumidDetector(MessageSender* sender) {
	messageSender = sender;
}

void HumidDetector::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	humidity = 6 + rand() % 100 - 6;
	cout << "��������� �������: " << humidity << " %" << endl;
}

void HumidDetector::addHumidDet() {
	std::cout << "���������� ������� ��������� ���������" << std::endl;
}

string HumidDetector::doMeasurestr() {
	srand(static_cast <unsigned> (time(0)));
	humidity = 12 + rand() % 80 - 12;

	return string("��������� �������: ") + to_string(humidity) + string(" %");
}
void HumidDetector::measureAndSend() {
	string str = this->doMeasurestr();
	messageSender->sendData(str);
}