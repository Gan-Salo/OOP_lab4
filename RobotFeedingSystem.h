#pragma once
#include "FeedingSystem.h"
#include <iostream>

using namespace std;
//���������� ����� ���������� ��� ��������� �����
class RobotFeedingSystem : public FeedingSystem{
public:
    void spreadFood();
};

