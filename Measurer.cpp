#include "Measurer.h"

using namespace std;

Measurer::Measurer() {}

Measurer::Measurer(MessageSender* sender) {
    messageSender = sender;
}

void Measurer::measureAndSend() {
    //printf("�������� ������: ");
    string data = this->doMeasurestr();
    messageSender->sendData(data);
}