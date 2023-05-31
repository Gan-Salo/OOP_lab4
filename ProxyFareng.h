#pragma once
#include "TemperDetector.h"
#include "TempFareng.h"

class ProxyFareng : public TemperDetector {
public:
	float temperature;
	TempFareng* detTemp;
	ProxyFareng(TempFareng& TempDet);
	void doMeasure() override;
private:	
};

