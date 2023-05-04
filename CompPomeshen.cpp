#include "CompPomeshen.h"


void CompPomeshen::Add(Pomeshen* room)
{
	rooms.push_back(room);
}
void CompPomeshen::Remove(Pomeshen* room)
{
	rooms.remove(room);
}
//void CompPomeshen::Composite() {
//	for (std::list<Pomeshen*>::iterator iter = rooms.begin(); iter != rooms.end(); iter++)
//		(*iter)->Composition();
//	std::cout << std::endl;
//
//}
void CompPomeshen::Display() {
	for (std::list<Pomeshen*>::iterator iter = rooms.begin(); iter != rooms.end(); iter++)
	{
		cout << (*iter)->name << ".\n";
		(*iter)->DisplaySensors();
		std::cout << std::endl;
	}
}