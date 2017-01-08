#include "Pile.h"

Pile::Pile()
{
	_pile.reserve(5);
	_pile.push_back(0);
}

Pile::Pile(double val)
{
	_pile.reserve(5);
	_pile.push_back(val);
}

const bool Pile::empty() const
{
	return _pile.empty();
}

const unsigned long long int Pile::size() const {
    return _pile.size();
}

double Pile::peekLast() const
{
	return _pile[_pile.size()-1];
}

double Pile::peekBeforeLast() const
{
	return _pile[_pile.size()-2];
}

double Pile::return_pop_back()
{
    double temp=peekLast();
    pop_back();
    return temp;
}

void Pile::pop_back()
{
	if(!_pile.empty()) {
		_pile.pop_back();
		if (_pile.empty())
			_pile.push_back(0);
	}
}

void Pile::push(const double& val)
{
	if(peekLast() == 0 && size() == 1)
		_pile.pop_back();
	_pile.push_back(val);
}

void Pile::swap()
{
	if(_pile.size() > 1)
	{
		double temp = _pile[_pile.size()-1];
		_pile[_pile.size()-1] = _pile[_pile.size()-2];
		_pile[_pile.size()-2]=temp;
	}
}

void Pile::clear()
{
	_pile.clear();
	_pile.push_back(0);
}

std::vector<double> Pile::peekLast5() const
{
	std::vector<double> temp;
	if(size()>5)
	{
		for(int i = size()-5 ; i < size() ; i++)
		{
			temp.push_back(_pile[i]);
		}
	} else {
		temp = _pile;
	}

	return temp;
}

