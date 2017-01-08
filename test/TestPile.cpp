#define CATCH_CONFIG_MAIN

#include "../src/Pile.h"
#include "catch.hpp"


void testAjoutValeur(const double &val,Pile &p)
{
	int nouvelleTaillePile = p.size();
	p.push(val);
	nouvelleTaillePile += 1;
	REQUIRE(p.size() == nouvelleTaillePile);
	REQUIRE(p.peek() == val);
}

bool pileEstVide(Pile &p)
{
	return p.size()==0 && p.empty();
}

TEST_CASE("Tests sur une pile", "[pile]")
{
	double valeurInitiale = 0.0;
	double premiereValeurPile = 10.5;
	double deuxiemeValeurPile = 5.3;
	double troisiemeValeurPile = 20.1;
	Pile p{};
	
	SECTION("Pile par défaut correctement créée")
	{
		Pile p1{};
		REQUIRE(p1.peek()==valeurInitiale);
		REQUIRE(p1.size()==1);
	}
	SECTION("Pile avec paramètre correctement créée")
	{
		Pile p1{premiereValeurPile};
		REQUIRE(p1.peek()==premiereValeurPile);
		REQUIRE(p1.size()==1);
	}
	
	p.push(premiereValeurPile);
	
	SECTION("Une pile vide est bien vide")
	{		
		testAjoutValeur(deuxiemeValeurPile,p);
		testAjoutValeur(troisiemeValeurPile,p);
		
		REQUIRE_FALSE(pileEstVide(p));
		
		while(p.size() != 0)
		{
			p.pop_back();
		}
		
		REQUIRE(pileEstVide(p));
		
		testAjoutValeur(deuxiemeValeurPile,p);
		testAjoutValeur(troisiemeValeurPile,p);
		p.clear();
		
		REQUIRE(pileEstVide(p));
	}
	
	SECTION("Une valeur est correctement ajoutée à la pile")
	{	 
		testAjoutValeur(deuxiemeValeurPile,p);
		testAjoutValeur(troisiemeValeurPile,p);		
	}
	
	SECTION("Une valeur est correctement retirée à la pile")
	{
		
	}
	
	
	
	
	
}
