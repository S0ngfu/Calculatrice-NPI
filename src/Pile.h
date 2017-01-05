#ifndef PILE_H
#define PILE_H

#include "OperatorBinary.h"
#include "OperatorUnary.h"

#include <vector>
#include <string>

class Pile {
public:
	// Public Declarations
	Pile();
	Pile(double val);
	~Pile() = default;

	const bool empty() const;
    const unsigned long long int size() const;
	double peek() const;
	double return_pop_back();
	void pop_back();
	void push(const double& val);
	void swap(); // swap les deux derniers éléments
	void clear();
	std::vector<double> peekLast5() const;
private:
	// Private Declarations
    std::vector<double> _pile;
};


#endif