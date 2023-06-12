#pragma once
#include <iostream>
#include "VentilationSystem.h"
#include "State.h"

using namespace std;

class CoolingState : public State {
public:
    CoolingState() {}

    void on() {
        cout << "Ventilation is already on" << endl;
    }

    void off() {
        cout << "Ventilation is turned off" << endl;
        myVentilation->setState(myVentilation->getOffState());
    }

    void cooling() {
        cout << "Ventilation is already working in cooling mode" << endl;
    }

    void circulation() {
        cout << "Ventilation set to circulation mode" << endl;
        myVentilation->setState(myVentilation->getCirculationState());
    }
};

