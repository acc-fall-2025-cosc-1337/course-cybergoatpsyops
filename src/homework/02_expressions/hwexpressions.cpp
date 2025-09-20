#include "hwexpressions.h"
#include <iostream>
using namespace std;


int main()
{
	double meal_amount, get_tip_amount, total;
	std::cout << "Enter meal cost:";
	std::cin >> meal_amount;
	std::cout << "Enter tip amount:";
	std::cin >> get_tip_amount;

	const double tax_rate = 6.75/100;
	double tax =(meal_amount - get_tip_amount) * tax_rate;
	std::cout <<"Calculated tax:" << tax_rate <<std::endl;
	return tax_rate;

	double tip= meal_amount * get_tip_amount;
	double total = meal_cost + get_tip_amount + tax;

	std:: cout << "Meal cost: $" << meal_amount <<std::endl;
	std::cout <<"Tip: $" << tip <<std::endl;
	std::cout <<"Tax: $" << tax <<std::endl;
	std::cout<<"Total: $" << total <<std::endl;
	return meal_cost, tip, tax, total;
	return 0;

}

//write function code here




