#include <iostream>

using namespace std;

int main()
{
	int TacToeboard[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			TacToeboard[i][j] = 0;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << TacToeboard[i][j];
		}
		cout << "\n";
	}
	return 0;
};

