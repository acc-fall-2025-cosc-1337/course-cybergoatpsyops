//write include statement for decisions header

#include "decisions.h"

std::string get_letter_grade_using_if(int numerical_grade) {
    if (numerical_grade >= 90 && numerical_grade <= 100) {
        return "A";
    } else if (numerical_grade >= 80) {
        return "B";
    } else if (numerical_grade >= 70) {
        return "C";
    } else if (numerical_grade >= 60) {
        return "D";
    } else if (numerical_grade >= 0) {
        return "F";
    } else {
        return "Invalid";
    }
}

std::string get_letter_grade_using_switch(int numerical_grade) {
    if (numerical_grade < 0 || numerical_grade > 100) {
        return "Invalid";
    }

    switch (numerical_grade / 10) {
        case 10:
        case 9:
            return "A";
        case 8:
            return "B";
        case 7:
            return "C";
        case 6:
            return "D";
        default:
            return "F";
    }
}

