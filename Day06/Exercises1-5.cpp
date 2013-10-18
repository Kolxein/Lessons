#include <iostream>

using namespace std;

class Employee
{
	public:
		Employee(int a, int b, int c);
		void Age(int age){itsage = age;}
		int GetAge()const {return itsage;}
		void YearsOfService(int yearsServis){itsyearsOfService = yearsServis;}
		int GetYearsOfService()const {return itsyearsOfService;}
		void Salary(int salary){itssalary = salary;}
		int GetSalary()const {return itssalary;}
		int Earnings()const 
		{
			int x = 12 * itsyearsOfService * itssalary;
			if ((x % 1000 ) > 500 ) // % ostatok ot delenia 2400 % 1000 = 400
			{
				return x + 1000 - x % 1000 ;
			}
			else return x - x % 1000;
		}
	private:
		int itsage;
		int itsyearsOfService;
		int itssalary;
};
Employee::Employee(int a, int b, int c)
	:itsage(a)
	,itsyearsOfService(b)
	,itssalary(c)
{
	cout << "Vozrast\n";
	cin >> a;
	itsage = a;
	cout << "Staj raboti\n";
	cin >> b;
	itsyearsOfService = b;
	cout << "Salari\n";
	cin >> c;
	itssalary = c;
};
int main()
{
	Employee Fil(0, 0, 0);
	cout << Fil.GetAge() << "\n";
	cout << Fil.GetYearsOfService() << "\n";
	cout << Fil.GetSalary() << "\n";
	cout << Fil.Earnings() << "\n\n";
	Employee Bob(0, 0, 0);
	cout << Bob.GetAge() << "\n";
	cout << Bob.GetYearsOfService() << "\n";
	cout << Bob.GetSalary() << "\n";
	cout << Bob.Earnings();
	return 0;
};
