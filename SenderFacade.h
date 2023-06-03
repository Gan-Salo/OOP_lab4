#pragma once
#include "MessageSender.h"
#include "Measurer.h"
#include "HumidDetector.h"
#include "GasDetector.h"
#include "SMS.h"
#include "Email.h"

//// Фасадный класс
//class SenderFacade {
//private:
//    MessageSender* smsSender;
//    MessageSender* emailSender;
//    Measurer* humiditySensor;
//    Measurer* gasdetector;
//
//public:
//    SenderFacade();
//    ~SenderFacade();
//    void collectTemperatureData();
//    void collectHumidityData();
//    void sendTemperatureData();
//    void sendHumidityData();
//};
