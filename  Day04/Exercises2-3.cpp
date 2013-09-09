#include <iostream>

using namespace std;
int main()
{
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	
	z == x - y ? cout << "x = " << x << "\n y = " << y << "\n z = " << z : cout << "x-y does not equal z";
	/*if (z == (x - y))
	{
		cout << "x = " << x << "\n y = " << y << "\n z = " << z;
	}
	else 
	{
		cout << "x-y does not equal z:   " << endl; 
	}*/
	return 0;
}
