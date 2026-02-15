#include "student.h"
#include <iostream>

Student::Student(std::string& Name, int Age) : Name(Name), Age(Age) {
    std::cout << "Constructed a new Student." << std::endl;
};

void Student::setName(std::string Name) {
    this->Name = Name;
}

void Student::setAge(int Age) {
    this->Age = Age;
}

std::string Student::getName() const {
    return Name;
}

int Student::getAge() const {
    return Age;
}

void Student::printStudentInfo() const {
    std::cout << "Name: " << Name << " Age: " << Age << std::endl;
}
