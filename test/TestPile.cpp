//
// Created by Simon on 05/12/2016.
//

#define CATCH_CONFIG_MAIN

#include "../src/Pile.cpp"
#include "catch.hpp"

TEST_CASE("Pile initialisation", "[pile]")
{
    Pile* test = new Pile();
    SECTION("Pile vide")
    {
        REQUIRE(test->peek() == 0.0);
        REQUIRE(test->empty());
    }
}