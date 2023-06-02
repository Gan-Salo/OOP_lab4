#pragma once
#include <vector>
#include "Measurer.h"

using namespace std;

class GasDetector : public Measurer {
public:
	GasDetector();
	GasDetector(MessageSender* sender) : Measurer(sender) {}
	int gasconcentr;
	void doMeasure();
	void sendData();
	void addGasDet();
private:
};