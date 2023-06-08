#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Pomeshen.h"


template <class Element, class Objects>
class CustomIterator {
private:
    Element* element_ptr;

public:
    CustomIterator(Element* Element) {
        element_ptr = Element;
    }

    Objects* next() {
        return element_ptr->getElement();
    }

    void operator++() {
        element_ptr = element_ptr->getNext();
    }

    bool operator!=(const CustomIterator& iterator) const {
        return !(*this == iterator);
    }

    bool operator==(const CustomIterator& iterator) const {
        return element_ptr == iterator.element_ptr;
    }
};