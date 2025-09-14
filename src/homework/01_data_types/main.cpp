#include <iostream>
#include "data_types.h"

using std::cout;
using std::endl;

int main()
{
	// Print the homework-specified outputs
	int a = 7;
	int b = 7;
	cout << a << " x " << b << " = " << multiply_numbers(a, b) << endl << endl;

	a = 5;
	b = 5;
	cout << a << " x " << b << " = " << multiply_numbers(a, b) << endl;

	return 0;
}
