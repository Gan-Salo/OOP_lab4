#pragma once
#include "KomboFood.h"

class BirdFood : public KomboFood
{
public:
	virtual std::string getDescriprion()
	{
		return std::string("This is food for Cows");
	};
	
};

