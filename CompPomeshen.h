#pragma once

#include "Pomeshen.h"
#include "CustomIterator.h"
#include <iostream>
#include <list>

class CompPomeshen : public Pomeshen {
    std::list<Pomeshen*> rooms;

public:
    void Add(Pomeshen* room);
    void Remove(Pomeshen* room);
    virtual void Display();
    CustomIterator GetIterator();
    Pomeshen* GetData();
    int GetSize();
};

