#include "CowSensor.h"

void CowSensor::collectData() {
    std::cout << "Сбор данных о корове:" << std::endl;
    dotempMeasure();
    getlocation();
}
void CowSensor::dotempMeasure() {
	cout << "Температура коровы: 38.5 *C";
}
void CowSensor::getlocation() {
	cout << "\nКоординаты коровы: N 60.5933, E 30.11045 " << endl;
}