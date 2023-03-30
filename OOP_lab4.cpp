// OOP_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include "Sensor.h"
#include "GasMode.h"
#include "GasDetector.h"
#include "GasAmiak.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    GasAmiak* am = new GasAmiak();
    GasDetector gs1(*am);
    gs1.viewMode();
    gs1.takeData();
    //_getch();
    //float test = gs1.sendData();
    cout << gs1.sendData();
    gs1.concentInfo();

}
