#include "CowSensor.h"

void CowSensor::collectData() {
    std::cout << "���� ������ � ������:" << std::endl;
    dotempMeasure();
    getlocation();
}
void CowSensor::dotempMeasure() {
	cout << "����������� ������: 38.5 *C";
}
void CowSensor::getlocation() {
	cout << "\n���������� ������: N 60.5933, E 30.11045 " << endl;
}