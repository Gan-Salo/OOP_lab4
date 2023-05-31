#pragma once
#include <iostream>
#include "Measurer.h"
#include <ctime> 
#include <stdlib.h>
#include <random>

using namespace std;

class HumidDetector : public Measurer {
public:
	HumidDetector();
	HumidDetector(MessageSender* sender);
	int humidity;
	void doMeasure();
private:
};