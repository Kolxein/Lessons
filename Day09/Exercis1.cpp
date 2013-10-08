#include <iostream>

using namespace std;

int yourAge = 0;
int *pYourAge = &yourAge;
int &rYourAge = yourAge;
int main()
{
	cout << yourAge << "\n";
	cin >> *pYourAge;
	cout << yourAge << "\n";
	cin >> rYourAge;
	cout << yourAge << "\n";
	return 0;
}

