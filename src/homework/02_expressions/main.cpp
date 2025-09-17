#include <iostream>
#include <iomanip>
#include "hwexpressions.h"

using namespace std;

int main() {
    double meal_amount, tip_rate;

    cout << "Enter the meal amount: $";
    cin >> meal_amount;

    cout << "Enter the tip rate (e.g., 0.15 for 15%): ";
    cin >> tip_rate;

    double tax_amount = get_sales_tax_amount(meal_amount);
    double tip_amount = get_tip_amount(meal_amount, tip_rate);
    double total = meal_amount + tax_amount + tip_amount;

    cout << fixed << setprecision(2); // Format to 2 decimal places

    cout << "\nReceipt:\n";
    cout << "Meal Amount:     $" << meal_amount << endl;
    cout << "Sales Tax:       $" << tax_amount << endl;
    cout << "Tip Amount:      $" << tip_amount << endl;
    cout << "Total:           $" << total << endl;

    return 0;
}
