#include "student.h"
#include "class.h"
#include <iostream>

using namespace std;


int main() {
    vector<student> students = {
        {1, "Philip Bradford", 100, 100, {100, 100, 100}},
        {2, "Bruno Viera", 43, 68, {90, 82, 85}},
        {3, "John Doe", 40, 35, {80, 85, 90}}
    };

    
    for (const student& student : students) {
        student.printInfo();
    }

    double average_class_score = classScore(students);
    cout << "Average Class Score: " << average_class_score << endl;
    return 0;
}