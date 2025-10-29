#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify multiply_numbers function") 
{
    REQUIRE(multiply_numbers(7, 7) == 49);
    REQUIRE(multiply_numbers(5, 5) == 25);
    REQUIRE(multiply_numbers(3, 4) == 12);   
    REQUIRE(multiply_numbers(0, 10) == 0);  
}

