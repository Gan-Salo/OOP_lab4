#pragma once
#include <iostream>
#include "Command.h"
#include "FeedingSystem.h"

using namespace std;
// ���������� ������� ��� ��������� ������
class FeedPigCommand : public Command {
private:
    FeedingSystem* feedingSystem;

public:
    FeedPigCommand(FeedingSystem* system) : feedingSystem(system) {}
    void execute();
};

