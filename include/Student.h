#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
    //Статическое поле с счётчиком id всех студентов(для уникальности)
    static int nextIdCount;

    //Поля
    const int studentId;
    string name;
    vector<int> grades;

    public:
        //Конструкторы
        Student();
        Student(const string& name, const vector<int>& initGrades);

        //Методы класса
        void setName(string name);
        void addGrade(int grade);
        double calculateAverage() const;
        void printInfo() const;

        //Геттер
        int getId() const {return studentId;}
};
