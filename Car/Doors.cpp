#include "Doors.h"

void Doors::Print() const
{
	cout << "Number of doors = " << quantity << endl << "Material from which the doors are made = " << material << endl;
}

void Doors::Set(int x, string z)
{
	quantity = x;
	material = z;
}
