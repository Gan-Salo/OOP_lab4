#pragma once
#include <iostream>
#include <stack>
using namespace std;

class Memento;

class CareTaker {
private:
    stack<Memento*> mementos;

public:
    void pushMemento(Memento* m) {
        mementos.push(m);
    }

    Memento* popMemento() {
        if (!mementos.empty()) {
            Memento* topMemento = mementos.top();
            mementos.pop();
            return topMemento;
        }
        return nullptr;
    }
};

