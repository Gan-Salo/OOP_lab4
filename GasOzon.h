#pragma once
#include "GasMode.h"
#include <iostream>

class GasOzon: public GasMode
{
public : 
	void chooseMode() { printf("\nGas mode for this sensor - Ozon. \n"); }
	float norma = 0.2;
};

