#pragma once
#include <cmath>
#include "Figure.h"
class Triangle :
	public Figure
{
	Point p90;
	double side_a, side_b;
public:
	Triangle(Point const& p, double const& a, double const& side_b);

	bool operator==(Triangle const& a) const noexcept;

	virtual double get_field() const;
	virtual double get_perimeter() const;
};

