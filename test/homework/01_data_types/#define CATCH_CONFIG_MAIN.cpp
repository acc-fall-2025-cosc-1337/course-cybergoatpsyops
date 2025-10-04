#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "data_types.h"

TEST_CASE("Verify multiply_numbers function") 
{
	REQUIRE(multiply_numbers(2, 3) == 6);
	REQUIRE(multiply_numbers(0, 10) == 0);
	REQUIRE(multiply_numbers(-4, 5) == -20);
	REQUIRE(multiply_numbers(7, -2) == -14);
	REQUIRE(multiply_numbers(-3, -3) == 9);
}