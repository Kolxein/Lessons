#include <iostream>

using namespace std;
class Shape
{
	protected:
		Shape(){};
		Shape (const Shape&);
		virtual ~Shape(){};
		virtual Shape* Clone(){return new Shape(*this);}
};

Shape::Shape(const Shape& rhs)
{};

class Rectangle : public Shape
{
	public:
		Rectangle(int, int);
		Rectangle(const Rectangle&);
		virtual ~Rectangle(){};
		virtual Shape* Clone(){return new Rectangle(*this);}
		int GetLength() const {return itsLength;}
		int GetWidth() const {return itsWidth;}
		void SetLength(int length) {itsLength = length;}
		void SetWidth (int width) {itsWidth = width;}
	protected:
		int itsLength;
		int itsWidth;
};

Rectangle::Rectangle(int length, int width)
	: itsLength(length)
	, itsWidth(width)
{};

Rectangle::Rectangle(const Rectangle& rhs)
	: Shape(rhs)
	, itsLength(rhs.GetLength())
	, itsWidth(rhs.GetWidth())
{};

class Square : public Rectangle
{
	public:
		Square(int);
		Square(const Square&);
		virtual ~Square(){};
		virtual Shape* Clone(){return new Square(*this);}
};

Square::Square(const Square& rhs)
	: Rectangle(rhs.itsLength, rhs.itsLength)
{};

Square::Square(int length)
	: Rectangle(length, length)
{};

int main()
{
	Rectangle mol(2,8);
	Square big(12);
	cout << "Length Square big = " << big.GetLength() << "\n";
	cout << "Width Square big = " << big.GetWidth() << "\n";
	cout << "\n";
	cout << "Length Rectangle mol = " << mol.GetLength() << "\n";
	cout << "Width Rectangle mol = " << mol.GetWidth() << "\n";
	return 0;
};

