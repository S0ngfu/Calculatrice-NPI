#define CATCH_CONFIG_MAIN

#include "../src/Pile.h"
#include "catch.hpp"


TEST_CASE("Pile", "[pile]")
{
    //A OPTI, possibilité de bien mieux faire.
    Pile test;
    SECTION("Pile vide")
    {
        REQUIRE(test.empty());
        test.push(4.21);
        REQUIRE(test.peek() == 4.21);
        REQUIRE(!test.empty());
        REQUIRE(test.size() == 1);
    }

    Pile test2(5.23);
    SECTION("Pile non vide")
    {
        REQUIRE(test2.peek() == 5.23);
        REQUIRE(!test2.empty());
        REQUIRE(test2.size() == 1);

        test2.push(4.21);
        REQUIRE(test2.peek() == 4.21);
        REQUIRE(test2.size() == 2);

        test2.swap();
        REQUIRE(test2.peek() == 5.23);
        REQUIRE(test2.size() == 2);

        double temp= test2.return_pop_back();
        REQUIRE(temp == 5.23);
        REQUIRE(test2.size() == 1);

        test2.clear();
        REQUIRE(test2.empty());
    }
}
