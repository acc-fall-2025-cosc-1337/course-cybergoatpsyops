#include <iostream>
#include "repetition.h"

using std::cout;
using std::cin;

int main()
{
    int choice;

    do
    {
        cout << "\nHomework 4 Menu\n";
        cout << "1 - Factorial\n";
        cout << "2 - Sum odd numbers\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int num;
            do
            {
                cout << "Enter a number (1-9): ";
                cin >> num;
            } while (num <= 0 || num >= 10);

            int result = get_factorial(num);
            cout << "Factorial of " << num << " is " << result << "\n";
        }
        else if (choice == 2)
        {
            int num;
            do
            {
                cout << "Enter a number (1-99): ";
                cin >> num;
            } while (num <= 0 || num >= 100);

            int result = sum_odd_numbers(num);
            cout << "Sum of odd numbers up to " << num << " is " << result << "\n";
        }
        else if (choice == 3)
        {
            cout << "Exiting program.\n";
        }
        else
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}