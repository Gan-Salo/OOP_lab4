#pragma once
#include <iostream>
#include "Command.h"
#include "FeedingSystem.h"

using namespace std; 
// онкретна€ команда дл€ кормлени€ коровы
class FeedCowCommand : public Command {
private:
    FeedingSystem* feedingSystem;

public:
    FeedCowCommand(FeedingSystem* system) : feedingSystem(system) {}
    void execute();
};
