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
#include "TempCelsius.h"
#include "TempFareng.h"
#include "ProxyFareng.h"

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
    TempCelsius *t1 = new TempCelsius();
    TempFareng* t2 = new TempFareng();
    ProxyFareng* t3 = new ProxyFareng(*t2);
    Sensor *sn1 = new Sensor();
    sn1->getMeasure(t2);
    sn1->getMeasure(t3);
}
