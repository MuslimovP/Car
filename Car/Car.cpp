#include "Car.h"

void Car::Print() const
{
	cout << "my car consists of = " << endl;
	Doors::Print();
	Engine::Print();
	Seats::Print();
	Wheels::Print();
}

void Car::Set(int q, string w, int e, string r, int x, string t, int y, string u)
{

}
