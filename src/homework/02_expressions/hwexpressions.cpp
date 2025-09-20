#include "hwexpressions.h"
#include <iostream>
using namespace std;


int main()
{
	double meal_cost, tip, total;
	std::cout << "Enter meal cost:";
	std::cin >> meal_cost
	std::cout << "Enter tip amount:";
	std::cin >> tip;

	const double tax_rate = 6.75/100;
	double tax =(meal_cost - tip) * tax_rate;
	std::cout <<"Calculated tax:" << tax_rate <<std::endl;
	return tax_rate;

	double tip= meal_cost * tip;
	double total = meal_cost + tip + tax;

	std:: cout << "Meal cost: $" << meal_cost <<std::endl;
	std::cout <<"Tip: $" << tip <<std::endl;
	std::cout <<"Tax: $" << tax <<std::endl;
	std::cout<<"Total: $" << total <<std::endl;
	return meal_cost, tip, tax, total;
	return 0;

}

//write function code here




