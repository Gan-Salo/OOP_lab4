#pragma once
#include "FeedingSystem.h"
#include <iostream>

using namespace std;
//Конкретный класс компонента для насыпания корма
class RobotFeedingSystem : public FeedingSystem{
public:
    void spreadFood();
};

