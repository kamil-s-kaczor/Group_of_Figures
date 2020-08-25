#pragma once
#include "Figure.h"
class Rectangle:
	public Figure
{
	Point bottom_Left, upper_Right;
public:
	Rectangle(Point const& a, Point const& b);

	bool operator==(Rectangle const& a) const noexcept;

	double get_perimeter();
	double get_field();
};

