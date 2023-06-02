// OOP_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <conio.h>
#include <string>
#include <map>
#include <vector>
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
#include "PomeshenCalculate.h"
#include "ImageData.h"
#include "ImageDataFactory.h"
#include "Terminal.h"

//Lab9-10
//abstract factory
#include "WaterFillingSystem.h"
#include "FeedingSystem.h"
#include "RoomSystemFactory.h"
#include "RobotWaterFillingSystem.h"
#include "ConvWaterSystem.h"
#include "RobotFeedingSystem.h"
#include "ConvFeedingSystem.h"
#include "ConcreteRoomSysFactory.h"
//factory method
#include "Ration.h"
#include "RationFactory.h"
#include "CowRation.h"
#include "PigRation.h"
#include "PigRationFactory.h"
#include "CowRationFactory.h"
//obj pool & singleton
#include "PomObjectPool.h"
//Lab11 - builder
#include "ClimateSystemBuilder.h"
#include "ClimateSystemDirector.h"
#include "ConcreteClimateSysBuilder.h"
#include "VentilationSystem.h"
#include "HeatingSystem.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    
    cout << "\n---Демонстрация работы Prototype---" << endl;
    //Создаем и инициализируем объект
    Pomeshen original("Кабинет");
    original.SetSensorRequire(2, 1, 1);
    original.SetVentilationRequire(1);
    original.SetHeatingRequire(1);
    cout << "\n-Требования для клона до изменений-" << endl;
    //Клонируем объект 
    Pomeshen* clone1 = original.Clone();
    clone1->DisplaySensorRequire();
    clone1->DisplayVentilationRequire();
    clone1->DisplayHeatingRequire();

    //Модифицируем клона
    clone1->SetSensorRequire(3, 2, 2);
    clone1->SetVentilationRequire(2);
    clone1->SetHeatingRequire(2);
    cout << "\n-Требования к оригиналу-" << endl;
    // Проверяем изменения в клонах и оригинале
    original.DisplaySensorRequire();
    original.DisplayVentilationRequire();
    original.DisplayHeatingRequire();

    cout << "\n-Требования для клона после изменений-" << endl;
    clone1->DisplaySensorRequire();
    clone1->DisplayVentilationRequire();
    clone1->DisplayHeatingRequire();

    // Освобождаем память
    delete clone1;

    //Демонстрация работы object pool 
    cout << "\n---Демонстрация работы Object pool---" << endl;
    PomObjectPool& pool = PomObjectPool::GetInstance();

    // Получение объекта из пула
    Pomeshen* obj1 = pool.AcquireObject("Помещение 1", 100.0);
    obj1->SetSensorRequire(3, 2, 1);
    obj1->DisplaySensorRequire();
    obj1->ResetObject();
    pool.ReleaseObject(obj1); // Возвращение объекта в пул
    
    // Получение того же объекта из пула
    Pomeshen* obj2 = pool.AcquireObject("Помещение 1", 100.0);
    obj2->DisplaySensorRequire(); 
    pool.ReleaseObject(obj2); // Возвращение объекта в пул

    // Получение нового объекта из пула
    Pomeshen* obj3 = pool.AcquireObject("Помещение 2", 200.0);
    obj3->SetSensorRequire(2, 1, 0);
    obj3->DisplaySensorRequire();

    pool.ReleaseObject(obj3); // Возвращение объекта в пул

    // Сброс состояния объекта перед повторным использованием
    obj3->ResetObject();
    obj3->DisplaySensorRequire(); // Состояние объекта сброшено в начальное

    

    //Демонстрация работы Abstract factory 
    cout << "\n---Демонстрация работы Abstract factory---" << endl;
    RoomSystemFactory* factory = new ConcreteRoomSysFactory();
    WaterFillingSystem* waterFillingSystem = factory->createWaterFillingSystem();
    FeedingSystem* feedingSystem = factory->createFeedingSystem();

    // Использование компонентов помещения
    waterFillingSystem->fillWater();
    feedingSystem->spreadFood();

    delete waterFillingSystem;
    delete feedingSystem;
    delete factory;

    //Демонстрация работы factory method
    RationFactory* factory1;
    Ration* ration;
    cout << "\n---Демонстрация работы factory method---" << endl;
    factory1 = new CowRationFactory();
    ration = factory1->createRation(80);
    ration->createRation();
    delete ration;
    delete factory1;

    factory1 = new PigRationFactory();
    ration = factory1->createRation(60);
    ration->createRation();
    delete ration;
    delete factory1;

    //Демонстрация работы строителя
    cout << "\n---Демонстрация работы builder---" << endl;
    ClimateSystemBuilder* builder = new ConcreteClimateSysBuilder();
    ClimateSystemDirector director(builder);
    director.construct();
    delete builder;

    return 0;
}



//
//int main()
//{
//    setlocale(LC_ALL, "Russian");   
//    //Демонстрация работы фасада и моста
//    cout << "\n\n---Демонстрация работы фасада и моста---" << endl;
//    SenderFacade facade;
//    facade.collectTemperatureData();
//    facade.sendTemperatureData();
//    facade.collectHumidityData();
//    facade.sendHumidityData();
//    
//    //Демонстрация работы информационного эксперта
//    cout << "\n\n---Демонстрация работы информационного эксперта---" << endl;
//    Pomeshen pomeshen1("Склад сырья", 530); 
//    PomeshenCalculate::CalculateRequire(&pomeshen1); // Рассчет требуемых характеристик
//    cout << "Помещение: " << pomeshen1.name << endl;
//    pomeshen1.DisplaySensorRequire();
//    pomeshen1.DisplayVentilationRequire();
//    pomeshen1.DisplayHeatingRequire();
//
//    //Демонстрация работы легковеса
//    cout << "\n\n---Демонстрация работы легковеса---" << endl;
//    Terminal terminal1("Terminal 1");
//    terminal1.addImage("image1", "png");
//    terminal1.addImage("image2", "jpg");
//
//    Terminal terminal2("Terminal 2");
//    terminal2.addImage("image1", "png");
//    terminal2.addImage("image4", "jpg");
//    terminal1.displayImages();
//    terminal2.displayImages();
//
//    return 0;
//}

