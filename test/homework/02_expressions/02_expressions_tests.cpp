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
double calculate_tax_from_input()
{
	double total, tip;
	std::cout << "Enter total amount: ";
	std::cin >> total;
	std::cout << "Enter tip amount: ";
	std::cin >> tip;

	// Assume a fixed tax rate, e.g., 7%
	const double tax_rate = 0.07;
	double tax = (total - tip) * tax_rate;
	std::cout << "Calculated tax: " << tax << std::endl;
	return tax;
}
void print_meal_details()
{
	double meal_cost, tip_rate, tax_rate;
	std::cout << "Enter meal cost: ";
	std::cin >> meal_cost;
	std::cout << "Enter tip rate (e.g., 0.15 for 15%): ";
	std::cin >> tip_rate;
	std::cout << "Enter tax rate (e.g., 0.07 for 7%): ";
	std::cin >> tax_rate;

	double tip = meal_cost * tip_rate;
	double tax = meal_cost * tax_rate;
	double total = meal_cost + tip + tax;

	std::cout << "Meal cost: $" << meal_cost << std::endl;
	std::cout << "Tip: $" << tip << std::endl;
	std::cout << "Tax: $" << tax << std::endl;
	std::cout << "Total: $" << total << std::endl;
}