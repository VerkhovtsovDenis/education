#include <cstring>
#include <ostream>
// #include <iostream>
#include "human.hpp"
#include "student.hpp"

Student::Student(uint8_t age = 0, const char *name = "", uint16_t year_start = 0, uint8_t university_year = 0, const char *group = ""):
    Human(age, name), year_start(year_start), university_year(university_year){
    strcpy(this->group, group);
    // std::cout << this->name;
}

std::ostream &operator<< (std::ostream &out, const Student &self){
    out << "Name: " << self.name << std::endl;
    out << "Age: " << (uint16_t)self.age << std::endl;
    out << "Year of start education: " << (uint16_t)self.year_start << std::endl;
    out << "Year of education: " << (uint16_t)self.university_year << std::endl;
    
    return out << std::endl;
};
