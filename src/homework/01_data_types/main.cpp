#include <iostream>
#include "data_types.h"

using std::cout;
using std::endl;

int main()
{
	int a = 6;
	int b = 7;

	int sum = add_numbers(a, b);
	int product = multiply_numbers(a, b);

	cout << "add_numbers(" << a << ", " << b << ") = " << sum << endl;
	cout << "multiply_numbers(" << a << ", " << b << ") = " << product << endl;

	return 0;
}
