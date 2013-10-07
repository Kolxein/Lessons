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
Dog* MakeDog(int age)
{
	Dog * pDog = new Dog(age);
	return pDog;
}
int main()
{
	int age = 7;
	cin >> age;
	Dog* Boof = MakeDog(age);
	cout << "Boof is " << Boof->GetAge() << " years old!\n";
	delete Boof;
	Boof = 0;
	cin >> age;
	Dog* Pool = MakeDog(age);
	cout << "Pool is " << Pool->GetAge() << " years old!\n";
	delete Pool;
	Pool =0;
	return 0;
}

