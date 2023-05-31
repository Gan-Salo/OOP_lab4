#pragma once
#include "Pomeshen.h"
#include "CustomIterator.h"
#include <iostream>
#include <list>

class CompPomeshen : public Pomeshen {
protected:
    std::list<Pomeshen*> rooms;
public:
    void Add(Pomeshen* room);
    void Remove(Pomeshen* room);
    void Display();
};

