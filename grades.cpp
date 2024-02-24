#include "student.h"
#include <iostream>
#include <ostream>

double student::totalScore() const {
        double sum = 0;
        for (int grade : hw_grades) {
            sum += grade;
        }
        double hwAverage;
        if (hw_grades.empty()){
            hwAverage = 0;
        } else {
            hwAverage = sum / hw_grades.size();
        }
        return (midterm * 0.3) + (final * 0.3) + (hwAverage * 0.4);
    }

void student::printInfo() const {
        std::cout << "Student ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Total Score: " << totalScore() << std::endl << std::endl;
    }

