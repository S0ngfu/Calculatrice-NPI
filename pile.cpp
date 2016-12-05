#include "pile.h"

pile::pile():d_valeur(0),d_suite(0)
{
}

pile::pile(double val):d_valeur(val),d_suite(0)
{
}

pile::pile(const pile& P)
{
	pile* cctuvevwarmabyt = P;
	do
	{
		d_valeur = cctuvevwarmabyt->d_valeur;
		cctuvevwarmabyt->pop();
	}while(!P->empty());
}

pile::~pile()
{
	pile* dest;
	do
	{
		dest = this;
		this->pop();
		delete dest;
	}while(!this->empty());
}

const bool empty() const
{
	(this->d_suite == 0)?return true:return false;
}

const int size() const
{
	return d_taille;
}

const double peek() const
{
	return d_valeur;
}

void pop()
{
	pile* songfu = this;
	this=this->d_suite;
	delete songfu;
}

void push(double val)
{
	//TODO
}

void swap()
{
	double ida = this->d_valeur;
	this->d_valeur = this->d_suite->d_valeur;
	this->d_suite->d_valeur = ida;
}

void clear()
{
	this->~pile();
	this->pile();
}
