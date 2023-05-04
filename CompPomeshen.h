#pragma once
#include "Pomeshen.h"
#include <iostream>
#include <list>

class CompPomeshen : public Pomeshen
{
	list<Pomeshen*> rooms;
public:
	void Add(Pomeshen* room);
	void Remove(Pomeshen* room);
	virtual void Display();
	//virtual void Composite();


};

