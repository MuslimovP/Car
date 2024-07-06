#include <iostream>
#include <string>

using namespace std;

class Wheels
{
protected:
	int quantity;
	string Season;
public:
	Wheels() = default;
	Wheels(int x, string z) { quantity = x; Season = z; }
	void Print()const;
	void Set(int x, string z);
};

