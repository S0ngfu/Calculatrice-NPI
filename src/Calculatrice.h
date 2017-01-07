#ifndef CALCULATRICE_NPI_CALCULATRICE_H
#define CALCULATRICE_NPI_CALCULATRICE_H

#include "Pile.h"
#include "OperatorBinary.h"
#include "OperatorUnary.h"

class Calculatrice
{
public:
	///
	/// \brief Ajoute à la pile la chaine de caractère si elle est convertissable en double, appelle l'opérateur lié à la chaine de caractère sinon
	/// \param[in] inputs : Chaine de caractère
	/// \return True si la calculatrice doit s'arrêter, False sinon
    bool input(std::string& inputs);
    
    ///
    /// \brief Vérifie si le paramètre est un double
    /// \param[in] str : Chaine de caractère
    /// \return True si le paramètre est convertissable en double, False sinon
    bool isOnlyDouble(const char* str);
    
    ///
    /// \brief Fais un choix en fonction du caractère entré et envoie vers l'opérateur ou modifie "quit"
    /// \param[in] operateur : Caractère entré
    /// \param[out] quit : True si la calculatrice doit s'arrêter, False sinon
    void operateChoice(const std::string &operateur, bool& quit);
    
    ///
    /// \brief Appelle l'opérateur binaire correspondant
    /// \param[in] operation : Opérateur binaire précis
    void addOperate(OperatorBinary* operation);
    
    ///
    /// \brief Appelle l'opérateur unaire correspondant
    /// \param[in] operation : Opérateur unaire précis
    void addOperate(OperatorUnary* operation);
    
    ///
    /// \brief Renvoie la pile
    /// \return d_pile La pile
    Pile getPile();

private:
    Pile d_pile;
};

#endif //CALCULATRICE_NPI_CALCULATRICE_H
