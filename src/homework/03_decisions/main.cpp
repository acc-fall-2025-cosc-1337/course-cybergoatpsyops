//write include statements
#include <iostream>
#include "decisions.h"
int main() 
{
	int choice;
	int grade;

	std::cout << '1-Letter grade using if';
	std::cout << '2-Letter grade using switch';
	std::cout << '3-Exit'
	std::cout << 'Enter an option: ';
	std::cin >> choice;


	if (choice == 1) {

		std::cout << 'Enter grade: '
		std::cin >> grade;

		if (grade >= 0 && grade <= 100) {
			 letter_grade = get_letter_grade_using_if(grade);
			std::cout << 'Letter grade (using if): ' << letter_grade << "/n";
			 
		} else if {

			(choice == 2)
			letter_grade == get_letter_grade_using_switch(grade);
			std::cout << 'Letter grade (using switch): ' << letter_grade << "\n";
		} 
			
			
			}
			else {

				std::cout << "Invalid number";
			}
           
		
	} else if (choice == 3)
	{
		std::cout 'Proogram Exiting...';
	}

	else {
		std::cout 'Invalid option'
	}

	


	return 0;
}