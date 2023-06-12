#pragma once
//#include "VentilationSystem.h"
class VentilationSystem;

class State {
protected:
    VentilationSystem* myVentilation;

public:
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void circulation() = 0;
    virtual void cooling() = 0;

    void setVentil(VentilationSystem* ventilation) {
        myVentilation = ventilation;
    }
};
