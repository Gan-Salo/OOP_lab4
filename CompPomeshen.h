#pragma once
#include "Pomeshen.h"
#include "CustomIterator.h"
#include "CustomElement.h"
#include "CustomContainer.h"
#include <iostream>
#include <list>

class CompPomeshen : public Pomeshen {
protected:
    CustomContainer<Pomeshen*> rooms;
public:
    void Add(Pomeshen* room);
    void Removelast();
    void Display();
};

