#pragma once
#include <iostream>
#include "State.h"
#include "Memento.h"
#include "CareTaker.h"

using namespace std;

class VentilationSystem {
private:
    State* onState;
    State* offState;
    State* circulationState;
    State* coolingState;
    State* currentState;
    CareTaker careTaker;
public:
    void addVentilSystem();
    VentilationSystem() {}

    VentilationSystem(State* onSt, State* offSt, State* coolSt, State* circSt)
        : onState(onSt), offState(offSt), coolingState(coolSt), circulationState(circSt), currentState(offState) {
        onState->setVentil(this);
        offState->setVentil(this);
        coolingState->setVentil(this);
        circulationState->setVentil(this);
    }

    void setState(State* state) {
        this->currentState = state;
    }

    State* getState() {
        return currentState;
    }

    State* getOnState() {
        return onState;
    }

    State* getOffState() {
        return offState;
    }

    State* getCoolingState() {
        return coolingState;
    }

    State* getCirculationState() {
        return circulationState;
    }

    void makeOn() {
        currentState->on();
        saveState();
    }

    void makeOff() {
        currentState->off();
        saveState();
    }

    void makeCooling() {
        currentState->cooling();
        saveState();
    }

    void makeCirculate() {
        currentState->circulation();
        saveState();
    }

    void saveState() {
        Memento* memento = new Memento(currentState);
        careTaker.pushMemento(memento);

    }

    void restoreState() {
        Memento* memento = careTaker.popMemento();
        if (memento) {
            setState(memento->getState());
            cout << "Restoring previous state: " << typeid(*memento->getState()).name() << endl;
        }
        else {
            cout << "No previous state found." << endl;
        }
    }
};

