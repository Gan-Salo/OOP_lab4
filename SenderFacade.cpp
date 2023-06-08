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

void SenderFacade::collectandSendTemper() {
    humiditySensor->measureAndSend();
}

void SenderFacade::collectandSendHumidData() {
    gasdetector->measureAndSend();
}

