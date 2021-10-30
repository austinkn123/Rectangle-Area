#include "Rectangle.h"
#include <iostream>
using namespace std;



Rectangle::Rectangle()
{
	height = 0;
	width = 0;
}

Rectangle::Rectangle(double pHeight, double pWidth)
{
	setHeight(pHeight);
	setWidth(pWidth);
}

void Rectangle::setHeight(double pHeight)
{
	if (pHeight < 0)
	{
		pHeight = -pHeight;
	}
	height = pHeight;
}


void Rectangle::setWidth(double pWidth)
{
	if (pWidth < 0)
	{
		pWidth = -pWidth;
	}
	width = pWidth;
}

double Rectangle::getHeight()
{
	return height;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getArea()
{
	return height * width;
}

void Rectangle::print()
{
	for (int row = 1; row <= height; row++)
	{
		for (int col = 1; col <= width; col++)
		{
			cout << "*";
		}
	cout << endl;
	}
}