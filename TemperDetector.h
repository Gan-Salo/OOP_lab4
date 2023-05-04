#pragma once
#include <iostream>
#include "Measurer.h"


class TemperDetector: public Measurer {
public:
	
	//TemperDetector() = default;
	/*TemperDetector(string name) {
		this->codename = name;
	}*/
	/*TemperDetector(string c) {
		codename = c;
	}*/
	/*void getName() {
		cout << codename;
	}*/
	void doMeasure() {
		printf("Temperature measure");
	}
//private:
//	string codename;
};