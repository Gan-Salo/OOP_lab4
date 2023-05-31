#include "SenderFacade.h"

SenderFacade::SenderFacade() {
    smsSender = new SMS();
    emailSender = new Email();
    humiditySensor = new HumidDetector(smsSender);
    gasdetector = new GasDetector(emailSender);
}

SenderFacade::~SenderFacade() {
    delete smsSender;
    delete emailSender;
    delete humiditySensor;
    delete gasdetector;
}

void SenderFacade::collectTemperatureData() {
    humiditySensor->doMeasure();
}

void SenderFacade::collectHumidityData() {
    gasdetector->doMeasure();
}

void SenderFacade::sendTemperatureData() {
    humiditySensor->sendData();
}

void SenderFacade::sendHumidityData() {
    gasdetector->sendData();
}