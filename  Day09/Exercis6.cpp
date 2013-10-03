#include <iostream>

using namespace std;

int x = 0;
int main()
{
	char *pointer = NULL;
	for( int i = 0; i < 10; i++ )
	{
		pointer = new char[100];
		delete [] pointer;
	}
	//delete [] pointer;
	
	return 0;
}

