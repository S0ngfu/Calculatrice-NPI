#include "pile.h"

pile::pile():d_valeur(0), d_taille(0), d_suite(nullptr)
{
}

pile::pile(double val):d_valeur(val),d_taille(1), d_suite(nullptr)
{
}

pile::~pile()
{
	if(d_suite)
		d_suite->~pile();
	delete this;
}

const bool pile::empty() const
{
	return d_taille==0;
}

const int pile::size() const
{
	return d_taille;
}

double pile::peek() const
{
	return d_valeur;
}

void pile::pop()
{
	pile* temp = this;
	this=this->d_suite;
	delete temp;
}

void pile::push(double val)
{
	d_taille++;
	if(empty()) {
		d_valeur=val;
	}
	pile* temp = new pile(val);
	temp->d_suite=this;
	this=temp;
}

void pile::swap()
{
	if(d_suite) {
		double temp = this->d_valeur;
		this->d_valeur = this->d_suite->d_valeur;
		this->d_suite->d_valeur = temp;
	}
}

void pile::clear()
{
	this->~pile();
	this->pile();
}
