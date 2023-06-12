#pragma once
#include <iostream>
#include "VentilationSystem.h"
#include "State.h"

using namespace std;

class OnState : public State {
public:
    OnState() {}

    void on() {
        cout << "Ventilation is already on" << endl;
    }

    void off() {
        cout << "Ventilation is turned off" << endl;
        myVentilation->setState(myVentilation->getOffState());
    }

    void cooling() {
        cout << "Ventilation set to cooling mode" << endl;
        myVentilation->setState(myVentilation->getCoolingState());
    }

    void circulation() {
        cout << "Ventilation set to circulation mode" << endl;
        myVentilation->setState(myVentilation->getCirculationState());
    }
};
