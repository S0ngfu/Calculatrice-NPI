#ifndef PILE_H
#define PILE_H

class Pile {
	public:
		// Public Declarations
		Pile();
		Pile(double val);
		~Pile();
		
		const bool empty() const;
		const int size() const;
		double peek() const;
		void pop();
		void push(double val);
		void swap(); // swap les deux derniers éléments
		void clear();
		
	private:
		// Private Declarations
		double d_valeur;
		int d_taille;
		Pile* d_suite;
};


#endif