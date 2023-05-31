// OOP_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <conio.h>
#include "Sensor.h"
#include "Measurer.h"
#include "TemperDetector.h"
#include "HumidDetector.h"
#include "TempCelsius.h"
#include "TempFareng.h"
#include "ProxyFareng.h"
#include "SensAdapter.h"
#include "KomboFood.h"
#include "BirdFood.h"
#include "CowFood.h"
#include "Additions.h"
#include "Vitamines.h"
#include "Premixes.h"
#include "Pomeshen.h"
#include "CompPomeshen.h"
#include "MessageSender.h"
#include "GasDetector.h"
#include "SenderFacade.h"

int main()
{
    setlocale(LC_ALL, "Russian");   

    SenderFacade facade;

    facade.collectTemperatureData();
    facade.sendTemperatureData();

    facade.collectHumidityData();
    facade.sendHumidityData();

    return 0;
}

