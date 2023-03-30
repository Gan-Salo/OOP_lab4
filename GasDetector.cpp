#include "GasDetector.h"
#include <iostream>
#include <ctime> 
#include <stdlib.h>
#include <chrono>
#include <random>

using namespace std;

GasDetector::GasDetector(GasMode& mode) :
    chosedmode(&mode) {}

void GasDetector::viewMode() {
    chosedmode->chooseMode();
}

void GasDetector::takeData() {
    srand(static_cast <unsigned> (time(0)));
    GasDetector::concentration = (float)(rand()) / ((float)(rand()) * 5);
   // GasDetector::concentration = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}

float GasDetector::sendData() {
    return GasDetector::concentration;
}

void GasDetector::concentInfo() {
    if (concentration > 0.2)
        cout << "\nВнимание! Превышена норма содержания газа!";
    else  cout << "\nВсё в норме!";

}