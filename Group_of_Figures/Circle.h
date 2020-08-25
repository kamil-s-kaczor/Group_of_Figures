#pragma once
#include "Figure.h"
#include "Circle.h"

class Circle:
	public Figure
{
	Point center;
	double radius;

public:
	Circle(Point const& a, double const& radius);

	bool operator==(Circle const& a) const noexcept;

	virtual double get_field() const;
	virtual double get_perimeter() const;
};