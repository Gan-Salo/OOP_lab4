#pragma once
template <class Objects>
class CustomElement {
private:
    Objects element;
    CustomElement* next_element;

public:
    CustomElement(const Objects& elem) {
        element = elem;
        next_element = nullptr;
    }

    ~CustomElement() {
        if (next_element) {
            delete next_element;
        }
    }

    CustomElement* getNext() {
        return next_element;
    }

    Objects* getElement() {
        return &element;
    }

    void push(const Objects& elem) {
        if (next_element) {
            next_element->push(elem);
        }
        else {
            next_element = new CustomElement(elem);
        }
    }

    void pop() {
        if (next_element) {
            CustomElement* temp = next_element;
            next_element = next_element->getNext();
            temp->setNext(nullptr);
            delete temp;
        }
    }
};

