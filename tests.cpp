#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "student.h" 
#include "class.h"    

TEST_CASE("Testing average class score calculation") {
    SUBCASE("Empty class") {
        std::vector<student> students;
        CHECK(classScore(students) == 0);
    }

    SUBCASE("One student") {
        std::vector<student> students = {{1, "Student One", 100, 100, {100}}};
        CHECK(classScore(students) == 100);
    }

    SUBCASE("Multiple students") {
        std::vector<student> students = {
            {1, "Student One", 100, 100, {100, 100, 100}},
            {2, "Student Two", 90, 90, {90, 90, 90}},
            {3, "Student Three", 80, 80, {80, 80, 80}}
        };
        CHECK(classScore(students) == doctest::Approx(90));
    }

    SUBCASE("Multiple students (0 average)"){
        std::vector<student> students = {
            {1, "Student One", 0, 0, {0, 0, 0}},
            {2, "Student Two", 0, 0, {0, 0, 0}},
            {3, "Student Three", 0, 0, {0, 0, 0}}
        };
        CHECK(classScore(students) == doctest::Approx(0));
    }
}
