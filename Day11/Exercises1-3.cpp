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

class Rectangle :public Shape
{
	public:
		Rectangle():Shape(){};
		Rectangle(int, int);
		int GetLength() const {return itsLength;}
		int GetWidth() const {return itsWidth;}
		void SetLength(int length) {itsLength = length;}
		void SetWidth (int width) {itsWidth = width;}
	protected:
		int itsLength;
		int itsWidth;
};


Rectangle::Rectangle(int length,int width)
	:itsLength(length)
	,itsWidth(width)
{
}

class Square :public Rectangle
{
	public:
		Square() :Rectangle(){};
		Square(int);
};

Square::Square(int length)
{
	SetLength(length);
};

int main()
{
	Shape umolchania(7);
	Rectangle smol;
	Rectangle mol(2,8);
	Square big(12);
	smol.SetPoint(5);
	cout << "Center Point umolchania = " << umolchania.GetPoint() << "\n";
	cout << "Center Point smol = " << smol.GetPoint() << "\n";
	cout << "Center Point big = " << big.GetPoint() << "\n";
	cout << "Length big = " << big.GetLength() << "\n";
	cout << "\n";
	cout << "Center Point mol = " << mol.GetPoint() << "\n";
	cout << "Length mol = " << mol.GetLength() << "\n";
	cout << "Width mol = " << mol.GetWidth() << "\n";
	return 0;
}

