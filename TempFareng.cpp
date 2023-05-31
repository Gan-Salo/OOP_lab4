#include "TempFareng.h"

void TempFareng::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	temperature = -30 + rand() % 60;
	cout << "Температура: " << temperature << " *F" << endl;
}