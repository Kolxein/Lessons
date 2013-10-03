#include <iostream>

using namespace std;

class Dog
{
	public:
		Dog(int age)
		{
			itsAge = age;
		}
		int GetAge() const
		{
			return itsAge;
		}
	private:
		int itsAge;
};
Dog& MakeDog(int age)
{
	Dog * pDog = new Dog(age);
	return *pDog;
}
int main()
{
	int age = 7;
	Dog Boof = MakeDog(age);
	cout << "Boof is " << Boof.GetAge() << " years old!\n";
	return 0;
}

