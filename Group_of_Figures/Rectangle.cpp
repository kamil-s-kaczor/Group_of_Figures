#include "pch.h"
#include "Rectangle.h"

Rectangle::Rectangle(Point const& a, Point const& b)
{
	this->set_Figure_type(1);
	this->bottom_Left = a;
	this->upper_Right = b;
}

bool Rectangle::operator==(Rectangle const& a) const noexcept
{
	if (this->bottom_Left == a.bottom_Left)
	{
		if (this->upper_Right == a.upper_Right)
		{
			return true;
		}
	}
	return false;
}

double Rectangle::get_perimeter()
{
	double x = 2 * (upper_Right.x - bottom_Left.x);
	double y = 2 * (upper_Right.y - bottom_Left.y);
	return x + y;
}

double Rectangle::get_field()
{
	return (upper_Right.x - bottom_Left.x)* (upper_Right.y - bottom_Left.y);
}
