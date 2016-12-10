#ifndef PILE_H
#define PILE_H

#include <vector>

class Pile {
public:
	// Public Declarations
	Pile();
	Pile(double val);
	~Pile() = default;

	const bool empty() const;
    const unsigned long long int size() const;
	double peek() const;
	void pop();
	void push(const double& val);
	void swap(); // swap les deux derniers éléments
	void clear();

private:
	// Private Declarations
    std::vector<double> _pile;
};


#endif