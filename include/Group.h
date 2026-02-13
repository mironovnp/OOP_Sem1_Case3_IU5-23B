#include <iostream>
#include <string>
#include <vector>

class Student {
std::string name;
int id;
std::vector<int> grades;
} ;

class StudentGroup {
    std::string groupName;
    std::vector<Student> group;
} ;