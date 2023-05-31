#pragma once
#include <iostream>
#include "Measurer.h"

class TemperDetector : public Measurer {
public:
	TemperDetector() {}
	//TemperDetector(MessageSender* sender) : Measurer(sender) {}

	virtual void doMeasure() = 0;
	virtual ~TemperDetector() {}
};