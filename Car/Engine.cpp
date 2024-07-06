#include "Engine.h"

void Engine::Print() const
{
	cout << "Engine power = " << power << endl << "Engine brand = " << brand << endl;
}

void Engine::Set(int x, string z)
{
	power = x;
	brand = z;
}
