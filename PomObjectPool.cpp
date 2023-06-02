#include "PomObjectPool.h"

PomObjectPool& PomObjectPool::GetInstance() {
    static PomObjectPool instance;
    return instance;
}

Pomeshen* PomObjectPool::AcquireObject(string name, double area) {
    for (Pomeshen* object : pool) {
        if (object->name == name && object->GetArea() == area) {
            cout << "Используется существующий объект " << object->name << ", c площадью: " << object->GetArea() << endl;
            return object;
        }
    }
    Pomeshen* object = new Pomeshen(name, area);
    pool.push_back(object);
    cout << "Создан новый объект " << object->name << ", c площадью: " << object->GetArea() << endl;
    return object;
}

void PomObjectPool::ReleaseObject(Pomeshen* object) {
    pool.push_back(object);
}