#pragma once
#include <iostream>
#include "Command.h"
#include "FeedingSystem.h"

using namespace std; 
//���������� ������� ��� ��������� ������
class FeedCowCommand : public Command {
private:
    FeedingSystem* feedingSystem;

public:
    FeedCowCommand(FeedingSystem* system) : feedingSystem(system) {}
    void execute();
};
