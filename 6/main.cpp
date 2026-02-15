#include <iostream>
#include <vector>
#include <algorithm>

#include "student.h"

int main ()
{
    int selection =0;
    std::vector<Student>studentList;

    do
    {
        std::cout<<std::endl;
        std::cout<<"Select"<<std::endl;
        std::cout<<"Add students = 0"<<std::endl;
        std::cout<<"Print all students = 1"<<std::endl;
        std::cout<<"Sort and print students according to Name = 2"<<std::endl;
        std::cout<<"Sort and print students according to Age = 3"<<std::endl;
        std::cout<<"Find and print student = 4"<<std::endl;
        std::cin>>selection;

        switch(selection)
        {
        case 0: {
            std::string name;
            int age;
            std::cout << "Type student name:" << std::endl;
            std::cin >> name;
            std::cout << "Type student age:" << std::endl;
            std::cin >> age;
            studentList.emplace_back(name, age);
            break;
        }
        case 1:
            std::cout << "Printing all students." << std::endl;
            for (const auto& s : studentList) {
                s.printStudentInfo();
            }
            break;
        case 2:
            std::cout << "Sorting by name." << std::endl;
            std::sort(studentList.begin(), studentList.end(),
                      [](const Student& a, const Student& b) {
                return a.getName() < b.getName();
            });
            for (const auto& s : studentList) {
                s.printStudentInfo();
            }
            break;
        case 3:
            std::cout << "Sorting by age." << std::endl;
            std::sort(studentList.begin(), studentList.end(),
                      [](const Student& a, const Student& b) {
                          return a.getAge() > b.getAge();
                      });
            for (const auto& s : studentList) {
                s.printStudentInfo();
            }
            break;
        case 4: {
            std::string name;
            std::cout << "Search for a student name:" << std::endl;
            std::cin >> name;
            auto it = std::find_if(studentList.begin(), studentList.end(),
                                   [name](const Student& s){
                return s.getName() == name;
            });
            if (it != studentList.end()) {
                it->printStudentInfo();
            } else {
                std::cout << "Did not found anything." << std::endl;
            }
            break;
        }
    default:
        std::cout<< "Wrong selection, stopping..."<<std::endl;
        break;
    }
} while(selection < 5);

return 0;
}
