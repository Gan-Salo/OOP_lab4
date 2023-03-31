// OOP_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include "Sensor.h"
#include "GasMode.h"
#include "GasDetector.h"
#include "GasAmiak.h"
#include "GasOzon.h"
#include "Measurer.h"
#include "TemperDetector.h"
#include "HumidDetector.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    //GasAmiak* am = new GasAmiak();
    //GasOzon* oz = new GasOzon();
    //GasDetector gs1(*am);
    //gs1.viewMode();
    //gs1.takeData();
    ////_getch();
    ////float test = gs1.sendData();
    //cout << gs1.sendData();
    //gs1.concentInfo();

    //GasDetector gs2(*oz);
    //gs2.viewMode();
    TemperDetector *t1 = new TemperDetector();
    HumidDetector* t2 = new HumidDetector();
    Sensor *sn1 = new Sensor();
    sn1->getMeasure(t2);
}
