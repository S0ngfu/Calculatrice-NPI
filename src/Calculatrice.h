#ifndef CALCULATRICE_NPI_CALCULATRICE_H
#define CALCULATRICE_NPI_CALCULATRICE_H

#include "Pile.h"
#include "OperatorBinary.h"
#include "OperatorUnary.h"

class Calculatrice
{
public:
	///
	/// \brief Ajoute � la pile la chaine de caract�re si elle est convertissable en double, appelle l'op�rateur li� � la chaine de caract�re sinon
	/// \param[in] inputs : Chaine de caract�re
	/// \return True si la calculatrice doit s'arr�ter, False sinon
    bool input(std::string& inputs);
    
    ///
    /// \brief V�rifie si le param�tre est un double
    /// \param[in] str : Chaine de caract�re
    /// \return True si le param�tre est convertissable en double, False sinon
    bool isOnlyDouble(const char* str);
    
    ///
    /// \brief Fais un choix en fonction du caract�re entr� et envoie vers l'op�rateur ou modifie "quit"
    /// \param[in] operateur : Caract�re entr�
    /// \param[out] quit : True si la calculatrice doit s'arr�ter, False sinon
    void operateChoice(const std::string &operateur, bool& quit);
    
    ///
    /// \brief Appelle l'op�rateur binaire correspondant
    /// \param[in] operation : Op�rateur binaire pr�cis
    void addOperate(OperatorBinary* operation);
    
    ///
    /// \brief Appelle l'op�rateur unaire correspondant
    /// \param[in] operation : Op�rateur unaire pr�cis
    void addOperate(OperatorUnary* operation);
    
    ///
    /// \brief Renvoie la pile
    /// \return d_pile La pile
    Pile getPile();

private:
    Pile d_pile;
};

#endif //CALCULATRICE_NPI_CALCULATRICE_H
