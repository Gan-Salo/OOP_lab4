#pragma once
#include <iostream>
#include <list>
#include <string>
#include "Measurer.h"
#include "Observer.h"

using namespace std;

class GasDetector : public Measurer {
private:
	int gasconcentr;
	list<Observer*> observers; 
public:
	GasDetector();
	GasDetector(MessageSender* sender);	
	void doMeasure();
	string doMeasurestr();
	void measureAndSend();
	void addGasDet();
	void addObserver(Observer* observer);
	int getConcentr();
	void removeObserver(Observer* observer);
	void notifyObservers();

};