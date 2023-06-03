#pragma once
#include <vector>
#include <string>
#include "Measurer.h"

using namespace std;

class GasDetector : public Measurer {
public:
	GasDetector();
	GasDetector(MessageSender* sender);
	int gasconcentr;
	void doMeasure();
	string doMeasurestr();
	void measureAndSend();
	void addGasDet();
private:
};