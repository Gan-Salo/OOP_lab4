#pragma once

class VentilationSystem;
class State;

class Memento {
private:
    State* state;

public:
    Memento(State* st) : state(st) {}

    State* getState() {
        return state;
    }
};

