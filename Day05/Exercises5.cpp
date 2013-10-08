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
		z = x / y;    // z = float(x)/float(y)
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
/*
float(x)/float(y) 
(float)x/(float)y -#C 
static_cast<float>(x)/static_cast<float>(y) - Ñ++ 
*/
