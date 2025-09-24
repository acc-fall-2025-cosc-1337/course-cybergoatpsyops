//write include statements


//write namespace using statement for cout

int main()
{
	
	double meal_cost = 50;
	double tip_percentage = .2;

	double sales_tax = get_sales_tax_amount(meal_cost);
	double tip_amount = get_tip_amount(meal_cost, tip_percentage);

	std::cout << "Meal cost: $" << meal_cost << std::endl;
	std::cout << "Sales tax: $" << sales_tax << std::endl;
	std::cout << "Tip amount: $" << tip_amount << std::endl;

	double total_bill  = meal_cost + sales_tax + tip_amount;
	std::cout << "Total bill: $" << total_bill << std::endl;

	return 0;
}
