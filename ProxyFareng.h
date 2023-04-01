#pragma once
#include "TemperDetector.h"
#include "TempFareng.h"

class ProxyFareng : public TemperDetector {
public:
	TempFareng* detTemp;
	ProxyFareng(TempFareng& TempDet);

	void doMeasure() override;
private:
	float temperature;
};

