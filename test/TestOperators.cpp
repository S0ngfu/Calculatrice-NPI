#define CATCH_CONFIG_MAIN

#include "../src/OperatorBinaryAdd.h"
#include "../src/OperatorUnarySquare.h"
#include "../src/OperatorBinarySubtract.h"
#include "../src/OperatorBinaryDivide.h"
#include "../src/OperatorBinaryMultiply.h"
#include "../src/OperatorUnarySquareRoot.h"
#include "../src/OperatorUnaryChangeSign.h"
#include "../src/OperatorUnaryCosinus.h"
#include "../src/OperatorUnaryNaturalLogarithm.h"
#include "../src/OperatorUnaryDecimalLogarithm.h"
#include "../src/OperatorUnaryExponential.h"
#include "../src/OperatorUnarySinus.h"
#include "../src/OperatorUnaryTangente.h"
#include "catch.hpp"

void testOpereratorBinaryAdd(double val1, double val2)
{
	double resultatAttendu;
	double resultatOperation;
	
	OperatorBinary *operationBin = new OperatorBinaryAdd();
	
	resultatAttendu = val1 + val2;
	resultatOperation = operationBin->operate(val1,val2);
	
	REQUIRE(resultatAttendu == resultatOperation);
	
	delete operationBin;
}

void testOpereratorBinaryDivide(double val1, double val2)
{
	double resultatAttendu;
	double resultatOperation;
	
	OperatorBinary *operationBin = new OperatorBinaryDivide();
	
	resultatAttendu = val1 / val2;
	resultatOperation = operationBin->operate(val1,val2);
	
	REQUIRE(resultatAttendu == resultatOperation);
	
	delete operationBin;
}

void testOpereratorBinaryMultiply(double val1, double val2)
{
	double resultatAttendu;
	double resultatOperation;
	
	OperatorBinary *operationBin = new OperatorBinaryMultiply();
	
	resultatAttendu = val1 * val2;
	resultatOperation = operationBin->operate(val1,val2);
	
	REQUIRE(resultatAttendu == resultatOperation);
	
	delete operationBin;
}

void testOpereratorBinarySubtract(double val1, double val2)
{
	double resultatAttendu;
	double resultatOperation;
	
	OperatorBinary *operationBin = new OperatorBinarySubtract();
	
	resultatAttendu = val1 - val2;
	resultatOperation = operationBin->operate(val1,val2);
	
	REQUIRE(resultatAttendu == resultatOperation);
	
	delete operationBin;
}

TEST_CASE("Tests sur les operateurs binaires", "[OperatorBinary]")
{
	double valeurUn = 2.5;
	double valeurDeux = 5.7;
	double moinsValeurUn = -valeurUn;
	double moinsValeurDeux = -valeurDeux;
	
	//Test des opérations d'addition
	SECTION("Une operation binaire d'ajout renvoie une valeur correcte avec deux valeurs positives")
	{
		testOpereratorBinaryAdd(valeurUn,valeurDeux);
		testOpereratorBinaryAdd(valeurDeux,valeurUn);
	}
	
	SECTION("Une operation binaire d'ajout renvoie une valeur correcte avec deux valeurs negatives")
	{
		testOpereratorBinaryAdd(moinsValeurUn,moinsValeurDeux);
		testOpereratorBinaryAdd(moinsValeurDeux,moinsValeurUn);
	}
	
	SECTION("Une operation binaire d'ajout renvoie une valeur correcte avec une valeur negative et une valeur positive")
	{
		testOpereratorBinaryAdd(valeurUn,moinsValeurDeux);
		testOpereratorBinaryAdd(moinsValeurUn,valeurDeux);
	}
	
	//Test des opérations de division
	SECTION("Une operation binaire de division renvoie une valeur correcte avec deux valeurs positives")
	{
		testOpereratorBinaryDivide(valeurUn,valeurDeux);
		testOpereratorBinaryDivide(valeurDeux,valeurUn);
	}
	
	SECTION("Une operation binaire de division renvoie une valeur correcte avec deux valeurs negatives")
	{
		testOpereratorBinaryDivide(moinsValeurUn,moinsValeurDeux);
		testOpereratorBinaryDivide(moinsValeurDeux,moinsValeurUn);
	}
	
	SECTION("Une operation binaire de division renvoie une valeur correcte avec une valeur negative et une valeur positive")
	{
		testOpereratorBinaryDivide(valeurUn,moinsValeurDeux);
		testOpereratorBinaryDivide(moinsValeurUn,valeurDeux);
	}
	
	//Test des opérations de multiplication
	SECTION("Une operation binaire de multiplication renvoie une valeur correcte avec deux valeurs positives")
	{
		testOpereratorBinaryDivide(valeurUn,valeurDeux);
		testOpereratorBinaryDivide(valeurDeux,valeurUn);
	}
	
	SECTION("Une operation binaire de multiplication renvoie une valeur correcte avec deux valeurs negatives")
	{
		testOpereratorBinaryDivide(moinsValeurUn,moinsValeurDeux);
		testOpereratorBinaryDivide(moinsValeurDeux,moinsValeurUn);
	}
	
	SECTION("Une operation binaire de multiplication renvoie une valeur correcte avec une valeur negative et une valeur positive")
	{
		testOpereratorBinaryDivide(valeurUn,moinsValeurDeux);
		testOpereratorBinaryDivide(moinsValeurUn,valeurDeux);
	}
	
	//Test des opérations de soustraction
	SECTION("Une operation binaire de soustraction renvoie une valeur correcte avec deux valeurs positives")
	{
		testOpereratorBinarySubtract(valeurUn,moinsValeurDeux);
		testOpereratorBinarySubtract(moinsValeurUn,valeurDeux);
	}
	SECTION("Une operation binaire de soustraction renvoie une valeur correcte avec deux valeurs negatives")
	{
		testOpereratorBinarySubtract(moinsValeurUn,moinsValeurDeux);
		testOpereratorBinarySubtract(moinsValeurDeux,moinsValeurUn);
	}
	
	SECTION("Une operation binaire de soustraction renvoie une valeur correcte avec une valeur negative et une valeur positive")
	{
		testOpereratorBinarySubtract(valeurUn,moinsValeurDeux);
		testOpereratorBinarySubtract(moinsValeurUn,valeurDeux);
	}
}

TEST_CASE("Tests sur les operateurs unaires", "[OperatorUnary]")
{
	OperatorUnary *operationUn;
	double valeurUn = 56.3;
	double moinsValeurUn = -valeurUn;
	double resultatOperation;
	double resultatAttendu;
	
	//Test des opérations de carré
	SECTION("Une operation unaire de carre renvoie une valeur correcte")
	{
		operationUn = new OperatorUnarySquare();
		resultatAttendu = pow(valeurUn,2);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations de racine carré
	SECTION("Une operation unaire de racine carree renvoie une valeur correcte avec valeur positive")
	{
		operationUn = new OperatorUnarySquareRoot();
		resultatAttendu = sqrt(valeurUn);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	SECTION("Une operation unaire de racine carree renvoie une valeur correcte avec valeur negative")
	{
		operationUn = new OperatorUnarySquareRoot();
		resultatAttendu = sqrt(moinsValeurUn);
		
		resultatOperation = operationUn->operate(moinsValeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations de changement de signe
	SECTION("Une operation unaire de changement de signe renvoie une valeur correcte avec valeur positive")
	{
		operationUn = new OperatorUnaryChangeSign();
		resultatAttendu = moinsValeurUn;
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	SECTION("Une operation unaire de changement de signe renvoie une valeur correcte avec valeur negative")
	{
		operationUn = new OperatorUnaryChangeSign();
		resultatAttendu = valeurUn;
		
		resultatOperation = operationUn->operate(moinsValeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations de cosinus	
	SECTION("Une operation unaire de cosinus renvoie une valeur correcte avec valeur positive")
	{
		operationUn = new OperatorUnaryCosinus();
		resultatAttendu = cos(valeurUn);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	SECTION("Une operation unaire de cosinus de signe renvoie une valeur correcte avec valeur negative")
	{
		operationUn = new OperatorUnaryCosinus();
		resultatAttendu = cos(moinsValeurUn);
		
		resultatOperation = operationUn->operate(moinsValeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations de logarithme	
	SECTION("Une operation unaire de logarithme renvoie une valeur correcte")
	{
		operationUn = new OperatorUnaryNaturalLogarithm();
		resultatAttendu = log(valeurUn);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations de logarithme	decimal
	SECTION("Une operation unaire de logarithme decimal renvoie une valeur correcte")
	{
		operationUn = new OperatorUnaryDecimalLogarithm();
		resultatAttendu = log10(valeurUn);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations d'exponentielle	
	SECTION("Une operation unaire d'exponentielle renvoie une valeur correcte avec valeur positive")
	{
		operationUn = new OperatorUnaryExponential();
		resultatAttendu = exp(valeurUn);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	SECTION("Une operation unaire d'exponentielle de signe renvoie une valeur correcte avec valeur negative")
	{
		operationUn = new OperatorUnaryExponential();
		resultatAttendu = exp(moinsValeurUn);
		
		resultatOperation = operationUn->operate(moinsValeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations de sinus	
	SECTION("Une operation unaire de sinus renvoie une valeur correcte avec valeur positive")
	{
		operationUn = new OperatorUnarySinus();
		resultatAttendu = sin(valeurUn);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	SECTION("Une operation unaire de sinus de signe renvoie une valeur correcte avec valeur negative")
	{
		operationUn = new OperatorUnarySinus();
		resultatAttendu = sin(moinsValeurUn);
		
		resultatOperation = operationUn->operate(moinsValeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	//Test des opérations de tangente	
	SECTION("Une operation unaire de tangente renvoie une valeur correcte avec valeur positive")
	{
		operationUn = new OperatorUnaryTangente();
		resultatAttendu = tan(valeurUn);
		
		resultatOperation = operationUn->operate(valeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	
	SECTION("Une operation unaire de tangente de signe renvoie une valeur correcte avec valeur negative")
	{
		operationUn = new OperatorUnaryTangente();
		resultatAttendu = tan(moinsValeurUn);
		
		resultatOperation = operationUn->operate(moinsValeurUn);	
		REQUIRE(resultatAttendu == resultatOperation);
	}
	

	
}
