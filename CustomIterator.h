#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Pomeshen.h"


class CustomIterator {
    Pomeshen** data;  // Массив указателей на Pomeshen
    int size;        // Размер массива
    int currentIndex; // Текущий индекс итератора

public:
    CustomIterator(Pomeshen** arr, int arrSize) : data(arr), size(arrSize), currentIndex(0) {}

    CustomIterator begin() {
        return *this;
    }

    CustomIterator end() {
        return CustomIterator(data, size); // Создаем итератор, указывающий на конец
    }

    bool operator!=(const CustomIterator& other) {
        return currentIndex != other.currentIndex;
    }

    CustomIterator& operator++() {
        ++currentIndex;
        return *this;
    }

    Pomeshen* operator*() {
        return data[currentIndex];
    }
};
//template <class node, class CompPomeshen>

//class CustomIterator {
//private:
//    std::list<Pomeshen>::iterator m_it;
//public:
//    CustomIterator(node* n) { node_ptr = n; }
//    CompPomeshen* next() { return node_ptr->get(); }
//    void  operator++ () { node_ptr = node_ptr->next(); }
//    CustomIterator operator ++ (int) {
//        CustomIterator iter(*this);        ++(*this);
//        return iter;
//    }
//    bool operator == (CustomIterator const& i) {
//        return node_ptr == i.node_ptr;
//    }
//    bool operator != (CustomIterator const& i) { return !(*this == i); }
//};

//private:
//    node* node_ptr;
//public:
//    CustomIterator(CompPomeshen& pomesh) : complex(pomesh), ptr(0) {}
//    int& operator*() {
//        return *ptr_;
//    }
//
//    CustomIterator(int* ptr) : ptr_(ptr) {}
//    int& operator*() {
//        return *ptr_;
//    }
//    CustomIterator operator*() const {
//        return complex.GetData(ptr);
//    }
//
//    CustomIterator& operator++() {
//        ptr++;
//        return *this;
//    }
//    CustomIterator operator++(int) {
//        CustomIterator temp = *this;
//        ptr++;
//        return temp;
//    }
//    bool operator==(const CustomIterator& other) const {
//        return ptr_ == other.ptr_;
//    }
//    bool operator!=(const CustomIterator& other) const {
//        return !(*this == other);
//    }
//    CustomIterator begin() {
//        return CustomIterator(data_);
//    }
//    CustomIterator end() {
//        return CustomIterator(data_ + size_);
//    }
//};

//
//template <class T>
//class element {         // один объект типа T
//private:
//    T object; // сам объект
//    element* next_node; // ссылка на следующий
//public:
//    element(T const& t) { object = t; next_node = 0; }
//    ~element() { if (next_node) delete next_node; }
//    element* next() { return next_node; }
//    T* get() { return &object; }
//    void push(T const& t) {
//        cout << "element push: " << t << endl;
//        if (next_node) next_node->push(t);
//        else next_node = new element(t);
//    }
//};
//
//template <class T>
//class aggregate {       // список объектов с итератором
//public:
//    typedef element<T> node;
//    typedef CustomIterator <node, T> myIterator;
//private:
//    node* root;
//public:
//    aggregate() { root = 0; }
//    ~aggregate() { if (root) delete root; }
//    myIterator begin() { return myIterator(root); }
//    myIterator end() { return  myIterator(0); }
//    void push(T const& t) {
//        if (root) root->push(t);
//        else  root = new node(t);
//    }
//};

   
//private:
//	obj* obj_ptr;
//public:
//
//	CustomIterator(obj* n) {
//		obj_ptr = n;
//	}
//	T* next() {
//		return obj_ptr->get();
//	}
//
//	void operator ++ {} {
//		obj_ptr = obj_ptr->next();
//	}
//
//	CustomIterator operator++(int) {
//		CustomIterator iter(*this);
//		++(*this);
//		return iter;
//	}
//
//	bool operator== (CustomIterator const& i) {
//		return obj_ptr == i.obj_ptr;
//
//	}
//};
