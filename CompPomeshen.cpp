#include "CompPomeshen.h"

void CompPomeshen::Add(Pomeshen* room)
{
	rooms.push_back(room);
}
void CompPomeshen::Remove(Pomeshen* room)
{
	rooms.remove(room);
}

void CompPomeshen::Display() {
	for (std::list<Pomeshen*>::iterator iter = rooms.begin(); iter != rooms.end(); iter++)
	{
		cout << "Название помещения: " << (*iter)->name << ".\n";
		(*iter)->DisplaySensors();
	}
}