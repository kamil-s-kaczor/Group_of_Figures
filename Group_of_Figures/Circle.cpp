#include "pch.h"
#include <cmath>
#include "Circle.h"
#include "Figure.h"

const double pi = std::acos(-1);

Circle::Circle(Point const& a, double const& radius)
{
	this->set_Figure_type(0);
	this->center = a;
	this->radius = radius;
}

bool Circle::operator==(Circle const& a) const noexcept
{
	if (this->center == a.center)
	{
		if (this->radius == a.radius)
		{
			return true;
		};
	};
	return false;
}

double Circle::get_field() const
{
	return pi * radius* radius;
}

double Circle::get_perimeter() const
{
	return 2 * radius * pi;
}