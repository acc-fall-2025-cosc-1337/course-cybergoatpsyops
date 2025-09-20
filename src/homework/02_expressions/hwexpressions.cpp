#include "hwexpressions.h"
#include <iostream>
using namespace std;


double calculate_tax_from_input()
{
	double meal_cost, tip;
	std::cout << "Enter meal cost:";
	std::cin >> total;
	std::cout << "Enter tip amount:";
	std::cin >> tip;

	const double tax_rate = 6.75/100;
	double tax =(total - tip) * tax_rate;
	std::cout <<"Calculated tax:" << tax_rate <<std::endl;
	return tax;
}

//write function code here




