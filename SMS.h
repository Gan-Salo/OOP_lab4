#pragma once
#include <iostream>
#include "MessageSender.h"

using namespace std;

class SMS : public MessageSender {
public:
    void sendData(const string& data);
};

