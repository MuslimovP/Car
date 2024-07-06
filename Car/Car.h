#include "Doors.h"  
#include "Engine.h"
#include "Seats.h"
#include "Wheels.h"

#include <iostream>
#include <string>

using namespace std;

class Car :public Doors, public Engine, public Seats, public Wheels
{
public:
	Car() = default; 
	Car(int q, string w, int e, string r, int x, string t, int y, string u ) :Doors(q, w), Engine(e,r), Seats(x,t),Wheels(y,u) {}
	void Print()const;
	void Set(int q, string w, int e, string r, int x, string t, int y, string u); 

};

