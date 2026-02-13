#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
    int studentId;
    string name;
    vector<int> grades;
    public:
        void addGrade(int grade);
        double calculateAverage();
        void printInfo();
};