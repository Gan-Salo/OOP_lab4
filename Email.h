#pragma once
#include <iostream>
#include "MessageSender.h"

using namespace std;
// ���������� ����� "E-mail"
class Email : public MessageSender {
public:
    void sendData();
};

