#pragma once

struct Point
{
	float x, y;
	Point(float const& x, float const& y);
	Point() = default;
	Point set_values(float x, float y);
	Point operator=(Point const& a);
	bool operator==(Point const& a) const& noexcept;
};

class Figure
{
	int figure_type;
public:
	void set_Figure_type(int const& x);
	virtual bool operator==(Figure const& a) const;
	virtual double get_field() const = 0;
	virtual double get_perimeter() const = 0;


};