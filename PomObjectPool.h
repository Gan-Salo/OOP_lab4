#pragma once
#include "Pomeshen.h"
using namespace std;

class PomObjectPool {
private:
    static PomObjectPool* instance;
    list<Pomeshen*> pool;

    PomObjectPool() {}

public:
    static PomObjectPool* GetInstance();
    Pomeshen* AcquireObject(string name, double area);      
    void ReleaseObject(Pomeshen* object);
};