#include "../include/Student.h"

//Инициализация статической переменной
int Student::nextIdCount = 1;

//Определение конструкторов
Student::Student() : studentId(nextIdCount++), name("Unknown") {}
Student::Student(const string& name, const vector<int>& initGrades) : studentId(nextIdCount++), name(name), grades(initGrades) {}

//Определение методов
void Student::setName(string newName){
    name = newName;
    cout << "Записано новое имя: " << name << endl;
}

void Student::addGrade(int grade){
    if (grade > 0 && grade < 5){
        grades.push_back(grade);
    }
    else if(grade <= 0){
        cout << "Оценка не может быть отрицательной!\n";
    }
    else{
        cout << "Оценки записываются в пятибальной шкале!\n";
    }
}

double Student::calculateAverage() const{
    if (grades.empty()) {return 0.0;};

    double sum = 0;
    for (int grade: grades){
        sum += grade;
    }
    return (sum/grades.size());
}

void Student::printInfo() const{
    cout << "------------------------Информация о студенте------------------------\n";
    cout << "ID студента: " << studentId << "\tИмя:" << name << endl;

    cout << "Оценки студента:\n";
    int strcount = 0;
    for (int grade: grades){
        if (strcount == 10){
            cout << endl;
        }
        cout << grade << ";";
        strcount++;
    }

    cout << "Средний балл студента: " << calculateAverage() << endl;
}