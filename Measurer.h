#pragma once
#include <iostream>
#include <string>
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
    virtual string doMeasurestr() = 0;
    virtual void measureAndSend();
};

