#ifndef RECTANGLE_H
#define RECTANLGE_H


using namespace std;

class Rectangle
{
private:
	double height;
	double width;
public:
	Rectangle();
	Rectangle(double pHeight, double pWidth);
	void setHeight(double pHeight);
	void setWidth(double pWidth);
	double getHeight();
	double getWidth();
	double getArea();
	void print();
};
#endif // !1





