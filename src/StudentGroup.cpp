#include "../include/StudentGroup.h"

void StudentGroup::addStudent(const Student& stud) {
    group.push_back(stud);
    std::cout << "Студент успешно добавлен!" << std::endl;
}