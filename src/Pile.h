#ifndef PILE_H
#define PILE_H

#include "OperatorBinary.h"
#include "OperatorUnary.h"

#include <vector>
#include <string>

class Pile {
public:
	// Public Declarations
	
	///
	/// \brief Constructeur vide
	Pile();
	
	///
	/// \brief Constructeur
	/// \param[in] val : Valeur � ajouter � la pile
	Pile(double val);
	
	///
	/// \brief Destructeur par d�faut
	~Pile() = default;
	
	///
	/// \brief V�rifie si la pile est vide
	/// \return True si la pile est vide, False sinon
	const bool empty() const;
	
	///
	/// \brief Renvoie la taille de la pile
	/// \return La taille de la pile
    const unsigned long long int size() const;
    
    ///
	/// \brief Renvoie le premier �l�ment de la pile
	/// \return Le premier �l�ment de la pile
	double peek() const;
	
	///
	/// \brief Renvoie le dernier �l�ment de la pile et l'enl�ve de celle-ci
	/// \return Le dernier �l�ment de la pile
	double return_pop_back();
	
	///
	/// \brief Enl�ve le premier �l�ment de la pile
	void pop_back();
	
	///
	/// \brief Ajoute l'�l�ment en param�tre � la pile
	/// \param[in] val : Valeur ajout�e � la pile
	void push(const double& val);
	
	///
	/// \brief Echange les deux derniers �l�ments de la pile
	void swap();
	
	///
	/// \brief Vide la pile
	void clear();
	
	///
	/// \brief Renvoie les 5 derniers �l�ments de la pile
	/// \return Les 5 derniers �l�ments de la pile s'ils existent, ceux qui existent sinon
	std::vector<double> peekLast5() const;
private:
	// Private Declarations
    std::vector<double> _pile;
};


#endif
