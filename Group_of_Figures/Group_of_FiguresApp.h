#pragma once

class PileOfFigures
{
	unsigned int size, top;
	Figure* f;

public:
	
	PileOfFigures(unsigned int s);
	bool full();
	bool empty();
};