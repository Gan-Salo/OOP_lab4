#pragma once

#include <vector>
#include "Sensor.h"
#include "GasMode.h"

using namespace std;

class GasDetector: public Sensor {
	GasMode* chosedmode;
public:
		GasDetector(GasMode& mode);
		float sendData();
		void takeData();
		void viewMode();
		void concentInfo();
private:
	//string mode;
	float concentration;
};