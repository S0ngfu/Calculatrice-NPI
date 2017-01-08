#define CATCH_CONFIG_MAIN

#include "../src/OperatorBinaryAdd.h"
#include "../src/OperatorUnarySquare.h"
#include "../src/OperatorBinarySubtract.h"
#include "../src/OperatorBinaryDivide.h"
#include "../src/OperatorBinaryMultiply.h"
#include "../src/OperatorUnarySquareRoot.h"
#include "../src/OperatorUnaryChangeSign.h"
#include "catch.hpp"

TEST_CASE("Tests sur les op�rateurs binaires", "[OperatorBinary]")
{
	double valeurUn = 2.5;
	double valeurDeux = 5.7;
	double resultatAttendu;
	double resultatOperation;
	OperatorBinary *operationBin;
	
	SECTION("Une op�ration binaire d'ajout renvoie une valeur correcte")
	{
		operationBin = new OperatorBinaryAdd();
		resultatAttendu = valeurUn + valeurDeux;
		resultatOperation = operationBin->operate(valeurUn,valeurDeux);
		
		REQUIRE(resultatAttendu == resultatOperation);
		
		resultatAttendu = valeurDeux + valeurUn;
		resultatOperation = operationBin->operate(valeurDeux,valeurUn);
		
		REQUIRE(resultatAttendu == resultatOperation);
		
		delete operationBin;
	}
	
	SECTION("Une op�ration binaire de division renvoie une valeur correcte")
	{
		operationBin = new OperatorBinaryDivide();
	}
	
	SECTION("Une op�ration binaire de multiplication renvoie une valeur correcte")
	{
		operationBin = new OperatorBinaryMultiply();
	}
	
	SECTION("Une op�ration binaire de soustraction renvoie une valeur correcte")
	{
		operationBin = new OperatorBinarySubtract();
	}
}

TEST_CASE("Tests sur les op�rateurs binaires", "[OperatorUnary]")
{
	OperatorUnary *operationUn;
	
	SECTION("Une op�ration unaire de carr� renvoie une valeur correcte")
	{
		operationUn = new OperatorUnarySquare();
	}
	
	SECTION("Une op�ration unaire de racine carr�e renvoie une valeur correcte")
	{
		operationUn = new OperatorUnarySquareRoot();
	}
	
	SECTION("Une op�ration unaire de changement de signe renvoie une valeur correcte")
	{
		operationUn = new OperatorUnaryChangeSign();
	}
	
}
