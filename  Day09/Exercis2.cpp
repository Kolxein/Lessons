#include <iostream>

using namespace std;

int varOne = 6;
int varTwo = 8;
int *const pVarOne = &varOne;
//int *const pVarOne = &varTwo;
int main()
{
	cout << varOne << "\n";
	cout << varTwo << "\n";
	cin >> *pVarOne;
	cout << varOne << "\n";
	return 0;
}

