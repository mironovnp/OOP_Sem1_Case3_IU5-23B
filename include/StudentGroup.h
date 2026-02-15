#ifndef STUDENTGROUP_H
#define STUDENTGROUP_H

#include <vector>   // Пункт 4
#include <string>   // Пункт 4
#include "Student.h"

class StudentGroup {
    std::string groupName;
    std::vector<Student> group;
public:
    void addStudent(const Student& stud);
    // Обязательно добавьте const здесь, чтобы совпало с .cpp файлом
    Student findStud(const int id) const;
    double calcAv() const;
};

#endif
