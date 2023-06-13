#pragma once
#include <iostream>
#include "Command.h"
#include "FeedingSystem.h"

using namespace std;
// Конкретная команда для кормления свиньи
class FeedPigCommand : public Command {
private:
    FeedingSystem* feedingSystem;

public:
    FeedPigCommand(FeedingSystem* system) : feedingSystem(system) {}
    void execute();
};

