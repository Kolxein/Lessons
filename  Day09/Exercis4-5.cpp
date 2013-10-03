#include <iostream>

using namespace std;

int x = 0;
int main()
{
	cout << x << "\n";
	int *pX = new int;
	*pX = 10;
	cout << x << "\n";
	cout << *pX << "\n";
	delete pX;
	pX = 0;
	return 0;
}

