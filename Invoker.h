#pragma once
#include <iostream>
#include <list>
#include "Command.h"

using namespace std;
//��������� - ��������� ���������
class Invoker {
private:
    list<Command*> commands;

public:
    void addCommand(Command* command);
    void executeCommands();
};
