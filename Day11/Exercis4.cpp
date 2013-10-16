#include <iostream>

using namespace std;
class Shape
{
	public:
		Shape():itsPoint(int (1)){};
		Shape(int);
		Shape (const Shape&);
		virtual ~Shape(){};
		virtual Shape* Clone(){return new Shape(*this);}
		int GetPoint() const {return itsPoint;}
		void SetPoint(int point) {itsPoint = point;}
	protected:
		int itsPoint;
};

Shape::Shape(int r)
	:itsPoint(r)
{
};
Shape::Shape(const Shape& rhs):itsPoint(rhs.GetPoint())
{
};

class Rectangle : public Shape
{
	public:
		Rectangle():Shape()
			,itsLength(int (0))
			,itsWidth(int (0)){};
		Rectangle(int);
		Rectangle(int, int);
		Rectangle(const Rectangle&);
		virtual ~Rectangle(){};
		virtual Rectangle* Clone(){return new Rectangle(*this);}
		int GetLength() const {return itsLength;}
		int GetWidth() const {return itsWidth;}
		void SetLength(int length) {itsLength = length;}
		void SetWidth (int width) {itsWidth = width;}
	protected:
		int itsLength;
		int itsWidth;
};

Rectangle::Rectangle(int length)
	:Shape()
	,itsLength(length)
	,itsWidth(int (0))
{
};
Rectangle::Rectangle(int length,int width)
	:itsLength(length)
	,itsWidth(width)
{
};
Rectangle::Rectangle(const Rectangle& rhs):Shape(rhs)
{
};

class Square : public Rectangle
{
	public:
		Square();
		Square(int);
		Square(const Square&);
		virtual ~Square(){};
		virtual Square* Clone(){return new Square(*this);}
};
Square::Square(const Square& rhs):Rectangle(rhs){};

Square::Square(int length)
	//:Rectangle(l)
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
};

