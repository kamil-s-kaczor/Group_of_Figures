#include "pch.h"
#include "Figure.h"

class Circle;
class Rectangle;
class Triangle;

Point::Point(float const& x, float const& y)
{
	this->x = x;
	this->y = y;
}

Point Point::set_values(float x, float y)
{
	this->x = x;
	this->y = y;
	return Point();
}

Point Point::operator=(Point const& a)
{
	this->x = a.x;
	this->y = a.y;
	return *this;
}

bool Point::operator==(Point const& a) const& noexcept
{
	if (a.x == this->x)
	{
		if (a.y == this->y)
		{
			return true;
		}
	}
	return false;
}

void Figure::set_Figure_type(int const& x)
{
	this->figure_type = x;
}

bool Figure::operator==(Figure const& a) const
{
	if (this->figure_type == a.figure_type)
	{

	}
	return false;
}
