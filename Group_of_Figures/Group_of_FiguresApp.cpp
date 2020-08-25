#include "pch.h"
#include <vector>
#include "Figure.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Group_of_FiguresApp.h"

template<class T, class Allocator = std::allocator<T> class Figure> class vector;

class PileOfFigures
{
	unsigned size, top;
	Figure* f;

public:
	PileOfFigures(unsigned int s, int x)
	{
		vector<Figure> reserve;
		size = s;
		top = 0;
	}
	~PileOfFigures() = delete;

	bool full() 
	{
		return PileOfFigures::top == PileOfFigures::size; 
	};
	bool empty() { return PileOfFigures::top == 0; };

	
	
};

PileOfFigures::PileOfFigures(unsigned int s)
{
	this->size = s;
	this->top = 0;
}
