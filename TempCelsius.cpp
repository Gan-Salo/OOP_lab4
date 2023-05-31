#include "TempCelsius.h"

void TempCelsius::doMeasure() {
	srand(static_cast <unsigned> (time(0)));
	temperature = -30 + rand() % 60;
	cout << "Температура: " << temperature << " *C" << endl;
}