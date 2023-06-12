// OOP_lab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <conio.h>
#include <string>
#include <map>
#include <stack>
#include <string>
#include <vector>
#include "Sensor.h"
#include "Measurer.h"
#include "TemperDetector.h"
#include "HumidDetector.h"
//#include "TempCelsius.h"
//#include "TempFareng.h"
//#include "ProxyFareng.h"
//#include "SensAdapter.h"
//#include "KomboFood.h"
//#include "BirdFood.h"
//#include "CowFood.h"
//#include "Additions.h"
//#include "Vitamines.h"
//#include "Premixes.h"
#include "Pomeshen.h"
#include "CompPomeshen.h"
#include "MessageSender.h"
#include "GasDetector.h"
#include "SenderFacade.h"
#include "PomeshenCalculate.h"
#include "ImageData.h"
#include "ImageDataFactory.h"
#include "Terminal.h"
//Iterator
#include "CustomElement.h"
#include "CustomIterator.h"
#include "CustomContainer.h"
//Lab9-10
//abstract factory
#include "ConcreteEquipFactory.h"
#include "EquipmentFactory.h"
#include "WaterFillingSystem.h"
#include "FeedingSystem.h"
#include "RobotWaterFillingSystem.h"
#include "ConvWaterSystem.h"
#include "RobotFeedingSystem.h"
#include "ConvFeedingSystem.h"
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
//Lab13 - state
#include "State.h"
#include "Memento.h"
#include "CareTaker.h"
#include "OnState.h"
#include "OffState.h"
#include "CoolingState.h"
#include "CirculationState.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian"); 
    
    cout << "\n---Демонстрация работы State и Memento---" << endl;
    
    //Создание объектов состояний
    State* onState = new OnState();
    State* offState = new OffState();
    State* coolingState = new CoolingState();
    State* circulationState = new CirculationState();

    //Создание системы вентиляции
    VentilationSystem ventilationSystem(onState, offState, coolingState, circulationState);

    //Демонстрация переключения состояний
    ventilationSystem.makeOn();  //Включаем систему вентиляции
    ventilationSystem.makeCooling();  //Устанавливаем режим охлаждения
    ventilationSystem.makeOff();  //Выключаем систему вентиляции
    ventilationSystem.makeOn();  // Включаем систему вентиляции
    ventilationSystem.makeCirculate();  //Устанавливаем режим циркуляции

    ventilationSystem.restoreState();  // Восстанавливаем предыдущее состояние
    ventilationSystem.getState();
    // Освобождение памяти
    delete onState;
    delete offState;
    delete coolingState;
    delete circulationState;

    return 0;
}

//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    
//    //Демонстрация работы Prototype 
//    cout << "\n---Демонстрация работы Prototype---" << endl;
//    //Создаем и инициализируем объект
//    Pomeshen* original = new Pomeshen("Кабинет", 80);
//    cout << "\n-Данные оригинального объекта-" << endl;
//    cout << "Название: " << original->GetName() << endl;
//    cout << "Площадь: " << original->GetArea() << endl;
//    //Клонируем объект 
//    cout << "\n-Данные клона до изменений-" << endl;   
//    Pomeshen* clone1 = original->Clone();
//    cout << "Название: " << clone1->GetName() << endl;
//    cout << "Площадь: " << clone1->GetArea() << endl;  
//    //Модифицируем клона
//    clone1->SetName("Новый кабинет");
//    clone1->SetArea(50);
//   //Проверяем изменения в клоне 
//    cout << "\n-Данные клона после изменений-" << endl;
//    cout << "Название: " << clone1->GetName() << endl;
//    cout << "Площадь: " << clone1->GetArea() << endl;
//    delete original, clone1;
//
//    //Демонстрация работы object pool 
//    cout << "\n---Демонстрация работы Object pool---" << endl;
//    PomObjectPool* pool1 = PomObjectPool::GetInstance();
//
//    // Получение объектов из пула
//    Pomeshen* obj1 = pool1->AcquireObject("Кабинет", 80);
//    pool1->ReleaseObject(obj1);
//    Pomeshen* obj2 = pool1->AcquireObject("Кабинет", 80);  
//    pool1->ReleaseObject(obj2);
//    Pomeshen* obj3 = pool1->AcquireObject("Амбар", 260);   
//    pool1->ReleaseObject(obj3);
//    
//    //Демонстрация работы Abstract factory 
//    cout << "\n---Демонстрация работы Abstract factory---" << endl;
//    EquipmentFactory* factory = new ConcreteEquipFactory();
//    WaterFillingSystem* waterFillingSystem = factory->createWaterFillingSystem();
//    FeedingSystem* feedingSystem = factory->createFeedingSystem();
//
//    //Использование компонентов оборудования
//    waterFillingSystem->fillWater();
//    feedingSystem->spreadFood();
//
//    delete waterFillingSystem;
//    delete feedingSystem;
//    delete factory;
//
//    //Демонстрация работы factory method
//    RationFactory* factory1;
//    Ration* ration;
//    cout << "\n---Демонстрация работы factory method---" << endl;
//    factory1 = new CowRationFactory();
//    ration = factory1->createRation(80);
//    ration->createRation();
//    delete ration;
//    delete factory1;
//
//    factory1 = new PigRationFactory();
//    ration = factory1->createRation(60);
//    ration->createRation();
//    delete ration;
//    delete factory1;
//
//    //Демонстрация работы строителя
//    cout << "\n---Демонстрация работы builder---" << endl;
//    ClimateSystemBuilder* builder = new ConcreteClimateSysBuilder();
//    ClimateSystemDirector director(builder);
//    director.construct();
//    delete builder;
//
//    return 0;
//}



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

