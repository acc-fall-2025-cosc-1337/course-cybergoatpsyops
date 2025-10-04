#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test factorial function", "[factorial]") {
	REQUIRE(get_factorial(0) == 1);
	REQUIRE(get_factorial(1) == 1);
	REQUIRE(get_factorial(5) == 120);
	REQUIRE(get_factorial(7) == 5040);
}

TEST_CASE("Test sum of odd numbers function", "[sum_odd_numbers]") {
	REQUIRE(sum_odd_numbers(1) == 1);
	REQUIRE(sum_odd_numbers(10) == 25); // 1 + 3 + 5 + 7 + 9 = 25
	REQUIRE(sum_odd_numbers(15) == 64); // 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 = 64
	REQUIRE(sum_odd_numbers(20) == 100); // 1 + 3 + ... + 19 = 100
}