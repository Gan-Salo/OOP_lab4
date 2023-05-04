#pragma once
#include "Additions.h"

class Vitamines : public Additions 
{
	virtual std::string getDescriprion();
	Vitamines(KomboFood* kFood) : Additions(kFood) {}
};

