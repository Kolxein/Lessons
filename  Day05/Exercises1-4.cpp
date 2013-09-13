#include <iostream>

using namespace std;

unsigned long int Perimeter(unsigned short int, unsigned short int);
unsigned long int Perimeter(unsigned short int x, unsigned short int y)
{
	return (x + y) * 2;
}
int main()
{
	unsigned short int x, y;
	cin >> x;
	cin >> y;
	cout << Perimeter( x, y);
	return 0;
}
/*
// Exercises 3 
stroka 6  y = myFunc(int);  => y = myFunc(x);
net v main - return 0;
void nevivodit return;
// Exercises 4
v (unsigned short int y) nelza prisvoit (int f())
*/
