#include "CompPomeshen.h"

void CompPomeshen::Add(Pomeshen* room)
{
	rooms.push(room);
}
void CompPomeshen::Removelast()
{
	rooms.pop();
}

void CompPomeshen::Display() {
	for (CustomContainer<Pomeshen*>::custIter iter = rooms.begin(); iter != rooms.end(); ++iter)
	{
		cout << "Название помещения: " << (*iter.next())->GetName() << ".\n";
		(*iter.next())->DisplaySensors();
	}
}