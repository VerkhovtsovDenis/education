#include <cstring>
#include <ostream>
// #include <iostream>
#include "human.hpp"
#include "student.hpp"

Student::Student(uint8_t age = 0, const char *name = "", uint16_t year_start = 0, uint8_t university_year = 0, const char *group = ""):
    Human(age, name), year_start(year_start), university_year(university_year){
    strcpy(this->group, group);
    // std::cout << this->name;
};

std::ostream &operator<< (std::ostream &out, const Student &self){
    out << "Name: " << self.name << std::endl;
    out << "Age: " << (uint16_t)self.age << std::endl;
    out << "Year of start education: " << (uint16_t)self.year_start << std::endl;
    out << "Year of education: " << (uint16_t)self.university_year << std::endl;
    
    return out << std::endl;
};

std::ostream &operator<<(std::ostream &out, const std::vector<Student> &self)
{
    for (auto self_item : self)
    {
        std::cout << self_item << std::endl;
    }
    return out << std::endl;
};

std::istream &operator>>(std::istream &in, std::vector<Student> &vStudent)
{
    int age;
    char name[30];
    int year_start;
    int university_year;
    char group[10];

    in >> age;
    in.getline(name, 30);
    in >> year_start;
    in >> university_year;
    in.getline(group, 10);

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        system("cls");
    }

    vStudent.push_back(Student((uint8_t)age, name, (uint16_t)year_start, (uint8_t)university_year, group));
    return in;
};
