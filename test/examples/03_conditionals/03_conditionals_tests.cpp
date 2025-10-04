#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("AND Truth Table", "[and]") {
	REQUIRE((false && false) == false);
	REQUIRE((false && true) == false);
	REQUIRE((true && false) == false);
	REQUIRE((true && true) == true);
}

