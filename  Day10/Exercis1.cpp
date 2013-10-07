#include <iostream>

using namespace std;
class Circle
{
	public:
		Circle();
		Circle(int);
		//~Circle();
		int GetRadius() {return *itsRadius;}
		void SetRadius(int radius) {*itsRadius = radius;}
		const Circle& operator++ ();   		//preinkrement
		const Circle operator++ (int); 		//postinkremrnt
	private:
		int *itsRadius;
};
Circle::Circle()
	//:*itsRadius(1)
{
	itsRadius = new int;
	*itsRadius = 1;

}

Circle::Circle(int r)
	//:*itsRadius(r)
{
	itsRadius = new int;
	*itsRadius = r;//hs.GetRadius(); //dostup otkrutuy
//	*itsRadius = *(rst.GetRadius); //dostup zakrituy
}
/*Circle::~Circle()
{
	delete itsRadius;
	itsRadius = 0;
}
*/
const Circle& Circle::operator++()
{
	++*itsRadius;
	return *this;
}
const Circle Circle::operator++(int x)
{
	Circle temp(*this);
	++*itsRadius;
	return temp;
}
int main()
{
	Circle Umolchania;
	Circle Smol(5);
	cout << "Circle radius Smol = " << Smol.GetRadius() << "\n";
	Smol++;
	cout << "Circle radius Smol = " << Smol.GetRadius() << "\n";
	++Smol;
	cout << "Circle radius Smol = " << Smol.GetRadius() << "\n";
	
	cout << "Circle radius Umolchania = " << Umolchania.GetRadius() << "\n";
	
	return 0;
}

