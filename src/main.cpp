#include <iostream>
#include <string>
#include <vector>
#include "../include/Student.h"
#include "../include/StudentGroup.h"

int main() {

    std::cout << "========================================\n";
    std::cout << "        STUDENT ACCOUNTING SYSTEM v1.0\n";
    std::cout << "    Система учета студентов и учебных групп v1.0\n";
    std::cout << "========================================\n\n";

    // Создаем группу.
    StudentGroup group;

    // Создаем объекты студентов.

    Student s1("Nikita Mironov", {});
    Student s2("Andrey Korotenko", {});
    Student s3("Alexander Fedyaev", {});
    Student s4("Ivan Nemtsov", {});
    Student s5("Gayana Akhmetzyanova", {});

    // Работа со студентом по умолчанию
    Student s();
    s.setName("EBLAN")
    s.printInfo();

    // Добавляем оценки
    s1.addGrade(5); s1.addGrade(4); s1.addGrade(5);
    s2.addGrade(4); s2.addGrade(4); s2.addGrade(3);
    s3.addGrade(5); s3.addGrade(5); s3.addGrade(4);
    s4.addGrade(3); s4.addGrade(4); s4.addGrade(3);
    s5.addGrade(5); s5.addGrade(5); s5.addGrade(5);

    std::cout << "Adding students to group...\n";
    group.addStudent(s1);
    group.addStudent(s2);
    group.addStudent(s3);
    group.addStudent(s4);
    group.addStudent(s5);
    std::cout << "Total students added.\n\n";

    std::cout << "Individual student reports:\n";
    std::cout << "------------------------------------\n";
    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    s4.printInfo();
    s5.printInfo();

    // Тестируем поиск студента по ID (например, 4)
    std::cout << "\nSearching for student with ID (4)...\n";
    Student found = group.findStud(4);
    if (found.getID() != 0) { // Проверка, если ID найден
        found.printInfo();
    }

    std::cout << "\nGroup Statistics:\n";
    std::cout << "------------------------------------\n";
    double avg = group.calcAv();
    std::cout << "Overall Group Average Grade: " << avg << "\n\n";

    std::cout << "========================================\n";
    std::cout << "          TESTING COMPLETED\n";
    std::cout << "========================================\n";

    return 0;
}
