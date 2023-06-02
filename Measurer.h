#pragma once
#include <iostream>
#include "MessageSender.h"
using namespace std;

class Measurer
{
protected: 
    MessageSender* messageSender;
public:
    Measurer();
    Measurer(MessageSender* sender);

	virtual void doMeasure() = 0;
    virtual void sendData() = 0;
};

