#pragma once
#include "Observer.h"
#include "GasDetector.h"

//���������� �����������
class GasObserver : public Observer {
public:
    void update(int gasconcentr) override {
        if (gasconcentr > 30) {
            std::cout << "������������ ���� ������� �������! ���������� ������� ����!" << std::endl;
            // ����� ����� �������� ��� ��� ������������ �� ������� �����������
        }
        else {
            std::cout << "������������ ���� � �������� �����." << std::endl;
        }
    }
};
