#include <iostream>

using namespace std;

float Division(unsigned short int x, unsigned short int y)
{
	float z;
	if (0 == y)
	{
		z = -1;
	}
	else 
	{
		z = x / y;
	}
	return z;
}
int main()
{
	unsigned short int x, y;
	cin >> x;
	cin >> y;
	cout << Division(x,y);
	return 0;
}
