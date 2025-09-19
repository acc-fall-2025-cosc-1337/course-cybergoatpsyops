#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") 
int main()
{
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Verify get_sales_tax function") 
{
	REQUIRE(get_sales_tax(100.0, 0.07) == Approx(7.0));
	REQUIRE(get_sales_tax(50.0, 0.08) == Approx(4.0));
}
TEST_CASE("Verify get_tip_amount function") 
{
	REQUIRE(get_tip_amount(100.0, 0.15) == Approx(15.0));
	REQUIRE(get_tip_amount(80.0, 0.20) == Approx(16.0));
}