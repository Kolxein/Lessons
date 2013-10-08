#include <iostream>

using namespace std;

unsigned short yourAge = 0;
unsigned short *pYourAge = &yourAge;
int main()
{
	cout << yourAge << "\n";
	cin >> *pYourAge;
	cout << yourAge << "\n";
	return 0;
}

