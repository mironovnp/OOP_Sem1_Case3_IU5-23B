#include "../include/StudentGroup.h"

void StudentGroup::addStudent(const Student& stud) {
    group.push_back(stud);
    std::cout << "Студент успешно добавлен!" << std::endl;
}

Student StudentGroup::findStud (const int idi_nxi) const {
    for (int i=0; i<group.size(); i++) {
        Student stud = group[i];
        if (stud.getId()==idi_nxi) {
            return stud;
        }
    }
}

double StudentGroup::calcAv() const {
    double avg=0; 
    for (int i=0; i<group.size(); i++) {
        Student stud = group[i];
        avg+=stud.calculateAverage();  
    }
    avg/=group.size();
    return avg;
}