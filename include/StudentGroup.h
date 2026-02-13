#include "Student.h"
class StudentGroup {
std::string groupName;
std::vector<Student> group;
public:
    void addStudent (const Student& stud);
    Student findStud(const int id);
    double calcAv();
} ;