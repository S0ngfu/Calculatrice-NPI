#include "Pile.h"

Pile::Pile()
{
	_pile.reserve(5);
}

Pile::Pile(double val):
{
	_pile.reserve(5);
	_pile.push_back(val);
}

const bool Pile::empty() const
{
	return _pile.empty();
}

double Pile::peek() const
{
	return _pile[_pile.size()];
}

void Pile::pop()
{
    _pile.pop_back();
}

void Pile::push(const double& val)
{
	_pile.push_back(val);
}

void Pile::swap()
{
	if(_pile.size() > 1)
	{
		double temp = _pile[_pile.size()];
		_pile[_pile.size()] = _pile[_pile.size()-1];
		_pile[_pile.size()-1]=temp;
	}
}

void Pile::clear()
{
	_pile.clear();
}
