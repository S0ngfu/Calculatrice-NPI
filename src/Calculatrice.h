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
    //std::string input(std::string& inputs);
    
    ///
    /// \brief Vérifie si le paramêtre est un double
    /// \param[in] str : Chaine de caractère
    /// \return True si le paramètre est convertissable en double, False sinon
    bool isOnlyDouble(const char* str);
    
    ///
    /// \brief Fais un choix en fonction du caractère entré et envoie vers l'opérateur
    /// \param[in] operateur : Caractère entré
    /// \return
    //std::string operateChoice(const char &operateur);
    
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

    ///
    /// \brief Permet de voir les valeurs sauvegardés
    //void showSavedValue() const;

    ///
    /// \brief Permet de récupérer une valeur sauvegarder dans la pile
    /// \param index : Position de la valeur sauvegarder
    //void putSavedValueInPile();

    ///
    /// \brief Permet de sauvegarder une liste de commande
    //void saveCommand();

    ///
    /// \brief Permet de voir les listes de commandes sauvegardés
    //void showSavedCommand() const;

    ///
    /// \brief Permet d'éxécuter la liste de commande
    //void executeSavedCommand();

    ///
    /// \brief Permet de supprimer une liste de commandes
    //void deleteOneCommand();

    void pushInPile(double val);

    void add();

    void substract();

    void multiply();

    void divide();

    void square();

    void squareRoot();

    void swap();

    void pop_back();

    void changeSign();

    void cosinus();

    void sinus();

    void tangente();

    void exponential();

    void naturalLogarithm();

    void decimalLogarithm();

    void pow();

    void saveValue();

    void putSavedValueInPile(int index);

    std::vector<double> getSavedValue();

    std::vector<std::string> getSavedCommand();

    void saveCommand(std::string commands);

    std::string getSavedCommand(int index);

    void deleteSavedCommand(int index);

    int getNumberSavedValue();

    int getNumberSavedCommand();

private:
    Pile d_pile;
    std::vector<double> d_saveValue;
    std::vector<std::string> d_saveCommand;
    OperatorBinary* operationBin;
    OperatorUnary* operationUn;
};

#endif //CALCULATRICE_NPI_CALCULATRICE_H
