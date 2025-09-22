//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout


int main()
{
	using std::cout;

	int num1 = 4;
	int num2 = 5;
	int result = multiply_numbers(num1, num2);
	cout << "Result: " << result << "\n";

	

	return 0;
}
