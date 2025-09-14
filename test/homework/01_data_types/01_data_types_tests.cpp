#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
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

