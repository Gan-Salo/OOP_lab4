#include "ChickenSensor.h"

void ChickenSensor::collectData() {
    std::cout << "Сбор данных о курице:" << std::endl;
    dotempMeasure();
    getlocation();
}

void ChickenSensor::dotempMeasure() {
	cout << "Температура курицы: 41 *C";
}
void ChickenSensor::getlocation() {
	cout << "\nКоординаты курицы: N 60.5932, E 30.11046 " << endl;
}