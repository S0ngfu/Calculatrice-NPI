#include "Pile.h"

Pile::Pile():d_valeur(0), d_suite(nullptr)
{
}

Pile::Pile(double val):d_valeur(val), d_suite(nullptr)
{
}

Pile::~Pile()
{
	if(d_suite)
		d_suite->~Pile();
	delete this;
}

const bool Pile::empty() const
{
	return (d_valeur==0.0 && !d_suite);
}

double Pile::peek() const
{
	return d_valeur;
}

void Pile::pop()
{
    Pile* temp=d_suite;
    delete this;
//    this=temp;
}

void Pile::push(double val)
{
	if(empty()) {
		d_valeur=val;
	} else {
        Pile *temp = new Pile(val);
        temp->d_suite = this;
//   	this=temp;
    }
}

void Pile::swap()
{
	if(d_suite) {
		double temp = this->d_valeur;
		this->d_valeur = this->d_suite->d_valeur;
		this->d_suite->d_valeur = temp;
	}
}

void Pile::clear()
{
	this->~Pile();
	new Pile();
}
