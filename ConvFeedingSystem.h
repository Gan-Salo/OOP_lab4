#pragma once
#include "FeedingSystem.h"
#include <iostream>

using namespace std;
//���������� ����� ���������� ��� ��������� �����
class ConvFeedingSystem : public FeedingSystem{
public:
    void spreadFood();
};