#pragma once
#include "Additions.h"

class Premixes : public Additions 
{
	virtual std::string getDescriprion();
	Premixes(KomboFood* kFood) : Additions(kFood) {}
};

