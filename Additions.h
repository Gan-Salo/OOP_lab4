#pragma once
#include "KomboFood.h"

class Additions : public KomboFood
{
protected:
	KomboFood* food;
public:
	virtual std::string getDescriprion() = 0;
	//Additions(KomboFood* kFood) { food = kFood; }
	//~Additions() {}

};

