#include <iostream>

using namespace std;

float Division(int x, int y)
{
	float z;
	if (0 == y)
	{
		cout << "Eror!";
	}
	else 
	{
		z =  x / y;
		cout << z;
	}
	return z;
}
int main()
{
	int x;
	int y;
	cin >> x;
	cin >> y;
	Division(x,y);
	return 0;
}
