#include <iostream>
#include <string>

using namespace std;

class Doors
{
protected:
	int quantity;
	string material;
public:
	Doors() = default;
	Doors(int x, string z) { quantity = x; material = z; }
	void Print()const;
	void Set(int x, string z);
};

