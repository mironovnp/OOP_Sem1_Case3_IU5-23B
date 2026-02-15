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

    // Работа со студентом по умолчанию
    std::cout << "Проверка работы конструктора по умолчанию:" << std::endl;
    Student s;
    std::cout << "Изменение имени студента..." << std::endl;
    s.setName("test_name");
    s.printInfo();

    //Создаем объекты студентов.

    Student s1("Никита Миронов", {});
    Student s2("Андрей Коротенко", {});
    Student s3("Александр Федяев", {});
    Student s4("Иван Немцов", {});
    Student s5("Гаяна Ахметзянова", {});

    //Добавляем оценки
    s1.addGrade(5); s1.addGrade(4); s1.addGrade(5);
    s2.addGrade(4); s2.addGrade(4); s2.addGrade(3);
    s3.addGrade(5); s3.addGrade(5); s3.addGrade(4);
    s4.addGrade(3); s4.addGrade(4); s4.addGrade(3);
    s5.addGrade(5); s5.addGrade(5); s5.addGrade(5);

    std::cout << "\nДобавление студентов в группу...\n";
    group.addStudent(s1);
    group.addStudent(s2);
    group.addStudent(s3);
    group.addStudent(s4);
    group.addStudent(s5);
    std::cout << "Все студенты успешно добавлены в группу.\n\n";

    std::cout << "Индивидуальная информация о студентах:\n";
    std::cout << "------------------------------------\n";
    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    s4.printInfo();
    s5.printInfo();

    // Тестируем поиск студента по ID (например, 4)
    std::cout << "\nПоиск студента с ID(4)...\n";
    Student found = group.findStud(4);
    if (found.getId() != 0) { // Проверка, если ID найден
        found.printInfo();
    }

    std::cout << "\nСтатистика группы:\n";
    std::cout << "------------------------------------\n";
    double avg = group.calcAv();
    std::cout << "Средняя оценка по всей группе: " << avg << "\n\n";

    std::cout << "========================================\n";
    std::cout << "          ЗАВЕРШЕНИЕ ТЕСТИРОВАНИЯ\n";
    std::cout << "========================================\n";

    return 0;
}
