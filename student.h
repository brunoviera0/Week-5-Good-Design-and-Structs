#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <vector>
#include <string>

using namespace std;

struct student {
    int id;
    string name;
    int final;
    int midterm;
    vector<int> hw_grades;

    double totalScore() const;
    void printInfo() const;
};


#endif
