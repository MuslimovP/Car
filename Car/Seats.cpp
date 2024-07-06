#include "Seats.h"

void Seats::Print() const
{
	cout << "Number of seats = " << quantity << endl << "Material from which the seats are made = " << material << endl;
}

void Seats::Set(int x, string z)
{
	quantity = x;
	material = z;
}
