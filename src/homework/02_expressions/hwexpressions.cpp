#include "hwexpressions.h"
#include <iostream>
using namespace std;


int main()
{
	double meal_cost, tip, tax, total;
	std::cout << "Enter meal cost:";
	std::cin >> meal_cost
	std::cout << "Enter tip amount:";
	std::cin >> tip;

	const double tax_rate = 6.75/100;
	double tax =(meal_cost - tip) * tax_rate;
	std::cout <<"Calculated tax:" << tax_rate <<std::endl;
	return tax;

	cout<<"Total for your meal is:"<< total << endl;
	return 0;
	

}

//write function code here




