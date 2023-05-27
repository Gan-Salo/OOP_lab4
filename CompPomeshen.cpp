#include "CompPomeshen.h"

void CompPomeshen::Add(Pomeshen* room) {
    rooms.push_back(room);
}

void CompPomeshen::Remove(Pomeshen* room) {
    rooms.remove(room);
}

void CompPomeshen::Display() {
    CustomIterator iter = GetIterator();
    while (iter.HasNext()) {
        Pomeshen* room = iter.Next();
        std::cout << room->name << ".\n";
        room->DisplaySensors();
        std::cout << std::endl;
    }
}

CustomIterator CompPomeshen::GetIterator() {
    int size = rooms.size();
    Pomeshen** data = new Pomeshen * [size];
    int i = 0;
    for (std::list<Pomeshen*>::iterator iter = rooms.begin(); iter != rooms.end(); ++iter) {
        data[i++] = *iter;
    }
    return CustomIterator(data, size);
}

Pomeshen* CompPomeshen::GetData() {
    if (!rooms.empty()) {
        return rooms.front();
    }
    return nullptr;
}

int CompPomeshen::GetSize() {
    return rooms.size();
}
//
//void CompPomeshen::Add(Pomeshen* room)
//{
//	rooms.push_back(room);
//}
//void CompPomeshen::Remove(Pomeshen* room)
//{
//	rooms.remove(room);
//}
//
//
////void CompPomeshen::Composite() {
////	for (std::list<Pomeshen*>::iterator iter = rooms.begin(); iter != rooms.end(); iter++)
////		(*iter)->Composition();
////	std::cout << std::endl;
////
////}
//
//void CompPomeshen::Display() {
//	for (std::list<Pomeshen*>::iterator iter = rooms.begin(); iter != rooms.end(); iter++)
//	{
//		//CustomIterator iter = CustomIterator(*this);
//		//std::list<Pomeshen*>::CustomIterator iter;
//		cout << (*iter)->name << ".\n";
//		(*iter)->DisplaySensors();
//		std::cout << std::endl;
//	}
//}