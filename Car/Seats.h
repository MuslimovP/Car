#include <iostream>
#include <string>

using namespace std;

class Seats
{
protected:
	int quantity;
	string material;
public:
	Seats() = default;
	Seats(int x, string z) { quantity = x; material = z; }
	void Print()const;
	void Set(int x, string z);

};

