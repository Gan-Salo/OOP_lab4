#include "Measurer.h"

using namespace std;

Measurer::Measurer() {}

Measurer::Measurer(MessageSender* sender) {
    messageSender = sender;
}

void Measurer::sendData() {
    printf("�������� ������: ");
    messageSender->sendData();
}