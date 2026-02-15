#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string Name;
    int Age;
public:
    Student(std::string& Name, int Age);
    void setName(std::string);
    void setAge(int);
    std::string getName() const;
    int getAge() const;
    void printStudentInfo() const;
};

#endif // STUDENT_H
