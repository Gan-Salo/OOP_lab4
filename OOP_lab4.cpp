// OOP_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include "Sensor.h"
#include "GasMode.h"
#include "GasDetector.h"
#include "Measurer.h"
#include "TemperDetector.h"
#include "HumidDetector.h"
#include "TempCelsius.h"
#include "TempFareng.h"
#include "ProxyFareng.h"
#include "KomboFood.h"
#include "BirdFood.h"
#include "CowFood.h"
#include "Additions.h"
#include "Vitamines.h"
#include "Premixes.h"
#include "Pomeshen.h"
#include "CompPomeshen.h"
#include "AnimalSensor.h"
#include "SensAdapter.h"

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
    string s = "sss";
    TempCelsius *t1 = new TempCelsius();
    
    //TempFareng* t2 = new TempFareng();
    //ProxyFareng* t3 = new ProxyFareng(*t2);
    Sensor *sn1 = new Sensor("sa0", "dcvxz");
    Sensor* sn2 = new Sensor("sa1", "d12");
    Sensor* sn3 = new Sensor("sa2", "dwq");
   // cout << sn1->codename;
    //sn1->getMeasure(t2);
    //sn1->getMeasure(t3);
    Pomeshen* longroom = new Pomeshen("long room");
    Pomeshen* sklad = new Pomeshen("sklad");
    longroom->AddSensor(sn1);
    longroom->AddSensor(sn2);
    sklad ->AddSensor(sn3);
    sklad->AddSensor(sn2);
    //longroom->DisplaySensors();

    CompPomeshen* complex1 = new CompPomeshen();
    complex1->Add(sklad);
    complex1->Add(longroom);
    complex1->Display();


    //BirdFood food;
    //food->getDescription();
   // Vitamines vitam(&food);
    AnimalSensor* t4 = new AnimalSensor();
    //Additions f ;
    SensAdapter* adp = new SensAdapter(t4);
    adp->getlocation();
    adp->doMeasure();
    
    BirdFood bird;
    CowFood cows;

    cout << "\n" << bird.doSpread();
    cout << "\n" << cows.doSpread();
    
    Premixes vit(&bird);
    cout << "\n" << vit.doSpread();
    //KomboFood k2;
    //BirdFood* b1;
   //Premixes* p1 = new Premixes(f1);


    //Тестирование итератора и комплекса
    // Создание объектов Pomeshen
    Pomeshen* room1 = new Pomeshen("\nRoom 1");
    Pomeshen* room2 = new Pomeshen("Room 2");
    Pomeshen* room3 = new Pomeshen("Room 3");
    
    room1->AddSensor(sn1);
    room1->AddSensor(sn2);
    room2->AddSensor(sn3);
    room3->AddSensor(sn2);
    // Создание объекта CompPomeshen
    CompPomeshen* compRoom = new CompPomeshen();

    // Добавление Pomeshen в CompPomeshen
    compRoom->Add(room1);
    compRoom->Add(room2);
    compRoom->Add(room3);

    // Вывод информации о помещениях и датчиках
    compRoom->Display();

    // Получение и использование итератора
    CustomIterator iter = compRoom->GetIterator();
    while (iter.HasNext()) {
        Pomeshen* room = iter.Next();
        // Дополнительные действия с помещением, если необходимо
    }

    // Освобождение памяти
    delete room1;
    delete room2;
    delete room3;
    delete compRoom;

    return 0;
    
}
