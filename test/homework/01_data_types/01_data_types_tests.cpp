#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "data_types.h"

TEST_CASE("Test multiply_numbers function")
{
    REQUIRE(multiply_numbers(7, 7) == 49);
    REQUIRE(multiply_numbers(5, 5) == 25);
    REQUIRE(multiply_numbers(0, 10) == 0);
    REQUIRE(multiply_numbers(-3, 4) == -12);
}

TEST_CASE("Verify multiply_numbers function")
{
	// positive numbers
	REQUIRE(multiply_numbers(5, 5) == 25);
	REQUIRE(multiply_numbers(6, 7) == 42);

	// zero
	REQUIRE(multiply_numbers(0, 5) == 0);
	REQUIRE(multiply_numbers(5, 0) == 0);

	// negative numbers
	REQUIRE(multiply_numbers(-3, 4) == -12);
	REQUIRE(multiply_numbers(-3, -4) == 12);
}

