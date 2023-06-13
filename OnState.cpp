#include "OnState.h"

void OnState::on() {
    cout << "Ventilation is already on" << endl;
}

void OnState::off() {
    cout << "Ventilation is turned off" << endl;
    myVentilation->setState(myVentilation->getOffState());
}

void OnState::cooling() {
    cout << "Ventilation set to cooling mode" << endl;
    myVentilation->setState(myVentilation->getCoolingState());
}

void OnState::circulation() {
    cout << "Ventilation set to circulation mode" << endl;
    myVentilation->setState(myVentilation->getCirculationState());
}