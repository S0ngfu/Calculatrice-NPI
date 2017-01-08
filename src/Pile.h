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
	/// \param[in] val : Valeur à ajouter à la pile
	Pile(double val);
	
	///
	/// \brief Destructeur par défaut
	~Pile() = default;
	
	///
	/// \brief Vérifie si la pile est vide
	/// \return True si la pile est vide, False sinon
	const bool empty() const;
	
	///
	/// \brief Renvoie la taille de la pile
	/// \return La taille de la pile
    const unsigned long long int size() const;
    
    ///
	/// \brief Renvoie le dernier élément de la pile
	/// \return Le dernier élément de la pile
	double peekLast() const;

	///
	/// \brief Renvoie l'avant dernier élément de la pile
	/// \return L'avant dernier élément de la pile
	double peekBeforeLast() const;

	///
	/// \brief Renvoie le dernier élément de la pile et l'enlève de celle-ci
	/// \return Le dernier élément de la pile
	double return_pop_back();
	
	///
	/// \brief Enlève le premier élément de la pile
	void pop_back();
	
	///
	/// \brief Ajoute l'élément en paramètre à la pile
	/// \param[in] val : Valeur ajoutée à la pile
	void push(const double& val);
	
	///
	/// \brief Echange les deux derniers éléments de la pile
	void swap();
	
	///
	/// \brief Vide la pile
	void clear();
	
	///
	/// \brief Renvoie les 5 derniers éléments de la pile
	/// \return Les 5 derniers éléments de la pile s'ils existent, ceux qui existent sinon
	std::vector<double> peekLast5() const;
private:
	// Private Declarations
    std::vector<double> _pile;
};


#endif
