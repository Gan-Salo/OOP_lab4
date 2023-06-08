#include "TempFareng.h"

void TempFareng::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	temperature = -10 + rand() % 140;
	cout << "Температура: " << temperature << " *F" << endl;
}