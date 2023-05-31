#pragma once
#include <vector>
#include "Measurer.h"

using namespace std;

class GasDetector : public Measurer {
public:
	GasDetector();
	GasDetector(MessageSender* sender);
	int gasconcentr;
	void doMeasure();
private:
};