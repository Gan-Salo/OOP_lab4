#pragma once
#include "Additions.h"

class Vitamines : public Additions 
{
public:
	virtual std::string doSpread();
	Vitamines(KomboFood* kFood) : Additions(kFood) {}
};

