#pragma once
#include "CustomElement.h"
#include "CustomIterator.h"

template <class Objects>
class CustomContainer {
public:
    typedef CustomElement<Objects> elem;
    typedef CustomIterator<elem, Objects> custIter;

private:
    elem* main_elem;

public:
    CustomContainer() : main_elem(nullptr) {}

    ~CustomContainer() {
        if (main_elem) {
            delete main_elem;
        }
    }

    custIter begin() {
        return custIter(main_elem);
    }

    custIter end() {
        return custIter(nullptr);
    }

    void push(const Objects& element) {
        if (main_elem) {
            main_elem->push(element);
        }
        else {
            main_elem = new elem(element);
        }
    }

    void pop() {
        if (main_elem) {
            elem* temp = main_elem;
            main_elem = main_elem->getNext();  
            delete temp;  // Удаляем предыдущий элемент
        }
    }
};

