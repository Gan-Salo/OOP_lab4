#include "ChickenSensor.h"

void ChickenSensor::collectData() {
    std::cout << "���� ������ � ������:" << std::endl;
    dotempMeasure();
    getlocation();
}

void ChickenSensor::dotempMeasure() {
	cout << "����������� ������: 41 *C";
}
void ChickenSensor::getlocation() {
	cout << "\n���������� ������: N 60.5932, E 30.11046 " << endl;
}