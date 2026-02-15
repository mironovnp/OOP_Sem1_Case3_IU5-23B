#include "../include/StudentGroup.h"

void StudentGroup::addStudent(const Student& stud) {
    group.push_back(stud);
    std::cout << "Студент успешно добавлен!" << std::endl;
}

Student StudentGroup::findStud (const int idi_nxi) const {
    for (const auto& stud : group) {
        if (stud.getId() == idi_nxi) {
            return stud;
        }
    }
    return Student(); // Возвращаем дефолтного студента, если не нашли
}

double StudentGroup::calcAv() const {
    //Проверка на пустую группу
    if (group.empty()) {
        return 0.0;
    }

    double avg = 0;
    for (size_t i = 0; i < group.size(); i++) {
        const Student& stud = group[i];
        avg += stud.calculateAverage();
    }
    return avg / group.size();
}
