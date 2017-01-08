#define CATCH_CONFIG_MAIN

#include "../src/Pile.h"
#include "catch.hpp"

void testAjoutValeur(const double &val,Pile &p)
{
	int nouvelleTaillePile = p.size() +1;
	p.push(val);
	
	REQUIRE(p.size() == nouvelleTaillePile);
	REQUIRE(p.peek() == val);
}

bool pileEstVide(Pile &p)
{
	return p.size()==0 && p.empty();
}

TEST_CASE("Tests sur une pile", "[pile]")
{
	double premiereValeurPile = 10.5;
	double deuxiemeValeurPile = 5.3;
	double troisiemeValeurPile = 20.1;
	double quatriemeValeurPile = 42.2;
	double cinquiemeValeurPile = 18.4;
	double sixiemeValeurPile = 22.8;
	Pile p{};
	
	SECTION("Pile par defaut correctement creee")
	{
		double valeurInitiale = 0.0;
		Pile p1{};
		REQUIRE(p1.peek()==valeurInitiale);
		REQUIRE(p1.size()==1);
	}
	SECTION("Pile avec parametre correctement creee")
	{
		Pile p1{premiereValeurPile};
		REQUIRE(p1.peek()==premiereValeurPile);
		REQUIRE(p1.size()==1);
	}
	
	p.push(premiereValeurPile);
	
	SECTION("Une pile vide est bien vide et se vide correctement")
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
	
	SECTION("Une valeur est correctement ajoutee a la pile")
	{	 
		testAjoutValeur(deuxiemeValeurPile,p);
		testAjoutValeur(troisiemeValeurPile,p);		
	}
	
	SECTION("Une valeur est correctement retiree a la pile")
	{
		
		p.push(deuxiemeValeurPile);
		p.push(troisiemeValeurPile);
		double nouvelleDerniereValeur = deuxiemeValeurPile;
		
		int nouvelleTaillePile = p.size()-1;
		p.pop_back();
		double derniereValeurPile = p.peek();
		
		REQUIRE(derniereValeurPile == nouvelleDerniereValeur);
		REQUIRE(p.size() == nouvelleTaillePile);
	}
	
	SECTION("Une valeur retiree renvoie correctement sa valeur")
	{
		p.push(deuxiemeValeurPile);
		p.push(troisiemeValeurPile);
		
		int nouvelleTaillePile = p.size()-1;
		double valeurASupprimer = p.peek();
		double valeurSupprimee = p.return_pop_back();
		
		REQUIRE(valeurASupprimer == valeurSupprimee);
		REQUIRE(p.size() == nouvelleTaillePile);
				
	}
	
	SECTION("Deux valeurs s'echangent correctement")
	{
		p.push(deuxiemeValeurPile);
		p.push(troisiemeValeurPile);
		
		p.swap();
		REQUIRE(p.return_pop_back() == deuxiemeValeurPile);
		REQUIRE(p.return_pop_back() == troisiemeValeurPile);
	}
	
	SECTION("Les 5 dernieres valeurs sont renvoyees correctement")
	{
		p.push(deuxiemeValeurPile);
		p.push(troisiemeValeurPile);
		
		//
		p.push(quatriemeValeurPile);
		p.push(cinquiemeValeurPile);
		p.push(sixiemeValeurPile);
		
	}
}
