#include <iostream>

using namespace std;
int main()
{
	int x, y;
	cin >> x;
	cin >> y;
	x < y ? y = x : x = y; /*словие Если в сокращенной форме
	/*if (x < y)
	{
		y = x;
	}
	else 
	{
		x = y;
	}*/
	cout <<"min = " << x << "\n";
	return 0;
}
