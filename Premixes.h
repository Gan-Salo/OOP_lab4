#pragma once
#include "Additions.h"

class Premixes : public Additions 
{
public:
	virtual std::string doSpread();
	Premixes(KomboFood* kFood) : Additions(kFood) {}
};

