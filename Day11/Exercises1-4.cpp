#include <iostream>

using namespace std;
class Shape
{
	public:
		Shape():itsPoint(int (1)){};
		Shape(int);
		int GetPoint() const {return itsPoint;}
		void SetPoint(int point) {itsPoint = point;}
	protected:
		int itsPoint;
};

Shape::Shape(int r)
	:itsPoint(r)
{
};

class Rectangle : public Shape
{
	
};
class Square : public Rectangle
{
	
};

int main()
{
	Shape Umolchania;
	Rectangle Smol;
	Square Big(7);
	Smol.SetPoint(5);
	cout << "Center Point Umolchania = " << Umolchania.GetPoint() << "\n";
	cout << "Center Point Smol = " << Smol.GetPoint() << "\n";
	cout << "Center Point Big = " << Big.GetPoint() << "\n";
	
	return 0;
}

