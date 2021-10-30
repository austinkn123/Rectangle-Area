#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
	Rectangle test1;
	Rectangle test2(30, 50);
	test1.print();

	test1.setHeight(3);
	test1.setWidth(5);
	test1.print();

	cout << "Width: " << test1.getWidth() << endl;
	cout << "Height: " << test1.getHeight() << endl;
	cout << "Area: " << test1.getArea() << endl;

	cout << "Width: " << test2.getWidth() << endl;
	cout << "Height: " << test2.getHeight() << endl;
	cout << "Area: " << test2.getArea() << endl;
	return 0;
}