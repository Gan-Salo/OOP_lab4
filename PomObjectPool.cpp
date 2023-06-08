#include "PomObjectPool.h"

PomObjectPool* PomObjectPool::instance = NULL;

PomObjectPool* PomObjectPool::GetInstance() {
    
    if (instance == 0)
    {
        instance = new PomObjectPool();
    }

    return instance;
}

//Pomeshen* PomObjectPool::AcquireObject(string name, double area) {
//    
//    if (pool.empty())
//    {
//        cout << "��� �������� ������. �������� ����� ������" << endl;
//        pool.push_front(new Pomeshen(name, area));
//    }
//
//    //cout << "��� �������� �� ������ " << endl;
//    Pomeshen* object = pool.front();
//    pool.pop_front();
//    cout << "������������ ������: " << object->GetName() << ", c ��������: " << object->GetArea() << endl;
//    return object;
//
//}
//
//void PomObjectPool::ReleaseObject(Pomeshen* object) {
//    pool.push_back(object);
//}

Pomeshen* PomObjectPool::AcquireObject(string name, double area) {
    for (Pomeshen* object : pool) {
        if (object->GetName() == name && object->GetArea() == area) {
            cout << "������ ������������ ������: " << object->GetName() << ", � ��������: " << object->GetArea() << endl;
            pool.pop_front(); 
            return object;
        }
    }
    Pomeshen* object = new Pomeshen(name, area);
    pool.push_front(object);
    pool.pop_front();
    cout << "������ ������: " << object->GetName() << ", c ��������: " << object->GetArea() << endl;
    return object;
}

void PomObjectPool::ReleaseObject(Pomeshen* object) {
    pool.push_front(object);
}