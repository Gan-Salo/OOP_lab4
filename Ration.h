#pragma once
#include <iostream>

using namespace std;
//������� ����� "������"
class Ration{
public:
    Ration(const string& type, double weight);
    virtual void createRation() = 0;
protected:
    string rattype;
    double ratweight;
};

