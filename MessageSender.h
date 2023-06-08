#pragma once
#include <iostream>

using namespace std;

class MessageSender {
public:
    virtual void sendData(const string& data) = 0;
};