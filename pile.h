#ifndef PILE_H
#define PILE_H

class pile {
	// Private section
	public:
		// Public Declarations
		pile();
		pile(double val);
		~pile();
		
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
		static int d_taille;
		pile* d_suite;
};


#endif