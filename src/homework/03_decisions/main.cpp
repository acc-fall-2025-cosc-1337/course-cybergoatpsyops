#include <iostream>
#include "decisions.h"

int main() {
    int choice;
    int grade;

    std::cout << "MAIN MENU\n\n";
    std::cout << "1 - Letter grade using if\n";
    std::cout << "2 - Letter grade using switch\n";
    std::cout << "3 - Exit\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    if (choice == 1 || choice == 2) {
        std::cout << "Enter numerical grade (0-100): ";
        std::cin >> grade;

        if (grade < 0 || grade > 100) {
            std::cout << "Grade is out of range.\n";
        } else {
            std::string letter_grade = (choice == 1)
                ? get_letter_grade_using_if(grade)
                : get_letter_grade_using_switch(grade);

            std::cout << "Letter Grade: " << letter_grade << "\n";
        }
    } else if (choice == 3) {
        std::cout << "Exiting program.\n";
    } else {
        std::cout << "Invalid menu option.\n";
    }

    return 0;
}
