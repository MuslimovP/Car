#include <iostream>
#include <string>

using namespace std;

class Engine
{
protected:
	int power;
	string brand;
public:
	Engine() = default;
	Engine(int x, string z) { power = x; brand = z; }
	void Print()const;
	void Set(int x, string z);
};

