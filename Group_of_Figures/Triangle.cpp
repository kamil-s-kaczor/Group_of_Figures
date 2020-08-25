#include <cmath>
#include "pch.h"
#include "Triangle.h"

Triangle::Triangle(Point const& p, double const& a, double const& b)
{
	this->set_Figure_type(2);
	this->p90 = p;
	this->side_a = a;
	this->side_b = b;
}

bool Triangle::operator==(Triangle const& a) const noexcept
{
	if (this->p90 == a.p90)
	{
		if (this->side_a == a.side_a)
		{
			if (this->side_b == a.side_b)
			{
				return true;
			};
		};
	}
	return false;
}


	double Triangle::get_field() const
	{
		return side_a * side_b /2;
	}

	double Triangle::get_perimeter() const
	{
		return side_a + side_b + sqrt((side_a * side_a) + (side_b * side_b));
	}
