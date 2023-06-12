#pragma once
#include <iostream>
#include "VentilationSystem.h"
#include "State.h"

using namespace std;

class OffState : public State {
public:
    OffState() {}

    void on() {
        cout << "Ventilation is turned on" << endl;
        myVentilation->setState(myVentilation->getOnState());
    }

    void off() {
        cout << "Ventilation is already off" << endl;
    }

    void cooling() {
        cout << "You need to turn on the system firstly!" << endl;
    }

    void circulation() {
        cout << "You need to turn on the system firstly!" << endl;
    }
};

