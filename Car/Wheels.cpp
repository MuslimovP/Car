#include "Wheels.h"

void Wheels::Print() const
{
	cout << "Number of wheels = " << quantity << endl << "what season the tires are for = " << Season << endl;
}

void Wheels::Set(int x, string z)
{
	quantity = x;
	Season = z;
}
