#include "Pile.h"

Pile::Pile():d_valeur(0), d_suite(nullptr)
{
	d_taille=0;
}

Pile::Pile(double val):d_valeur(val), d_suite(nullptr)
{
	d_taille=1;
}

Pile::~Pile()
{
	if(d_suite)
		d_suite->~Pile();
	delete this;
}

const bool Pile::empty() const
{
	return d_taille==0;
}

const int Pile::size() const
{
	return d_taille;
}

double Pile::peek() const
{
	return d_valeur;
}

void Pile::pop()
{
    Pile* temp=d_suite;
    delete this;
    this=temp;
}

void Pile::push(double val)
{
	if(empty()) {
		d_valeur=val;
	}
	Pile* temp = new Pile(val);
	temp->d_suite=this;
	this=temp;
	d_taille=d_suite->d_taille+1;
}

void Pile::swap()
{
	if(d_suite) {
		d_taille--;
		d_suite->d_taille++;
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
