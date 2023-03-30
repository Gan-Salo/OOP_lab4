#pragma once
#include "GasMode.h"
#include <iostream>

class GasAmiak : public GasMode
{
	public:
	void chooseMode() { printf("Gas mode for this sensor - Ammiak. \n"); }
	float norma = 0.4;
};


