#pragma once
#include "Observer.h"
#include "GasDetector.h"

//Конкретный наблюдатель
class GasObserver : public Observer {
public:
    void update(int gasconcentr) override {
        if (gasconcentr > 30) {
            std::cout << "Концентрация газа слишком высокая! Необходимо принять меры!" << std::endl;
            // Здесь можно добавить код для реагирования на высокую температуру
        }
        else {
            std::cout << "Концентрация газа в пределах нормы." << std::endl;
        }
    }
};
