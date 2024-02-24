#include "class.h"

double classScore(const std::vector<student>& students){
    double class_score = 0;
    if (students.empty()){
        return class_score;
    }
    for (const student& student : students) {
        class_score += student.totalScore();
    
    };
    return class_score / students.size();

}