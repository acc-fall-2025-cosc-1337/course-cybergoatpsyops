#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Test get_factorial function") 
{
    REQUIRE(get_factorial(3) == 6);
    REQUIRE(get_factorial(5) == 120);
    REQUIRE(get_factorial(1) == 1);
}

TEST_CASE("Test sum_odd_numbers function") 
{
    REQUIRE(sum_odd_numbers(5) == 9);   
    REQUIRE(sum_odd_numbers(10) == 25); 
}