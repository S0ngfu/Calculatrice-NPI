#ifndef PILE_H
#define PILE_H

class pile {
	// Private section
	public:
		// Public Declarations
		pile();
		pile(double val);
		pile(const pile& P);
		~pile();
		
		const bool empty() const;
		const int size() const;
		const double peek() const;
		void pop();
		void push(double val);
		void swap(); // swap les deux derniers �l�ments
		void clear();
		
	private:
		// Private Declarations
		double d_valeur;
		static int d_taille;
		pile* d_suite;
};


#endif

