#include <iostream>

using namespace std;
int f(int x, int y);

int main()
{
	int x;
	int y;
	cin >> x;
	cin >> y;
	cout << f(x, y);
}
int f(int x, int y)
{
	if (y > 1)
	{
		return x * f (x,y - 1);
	};
}
