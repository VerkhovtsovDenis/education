#include<iostream>
#include <cstring>
#include "student.hpp"

Human::Human(int age, const char *name):age(age){
    std::strcpy(this->name, name);
} 

Student::Student(int age, const char *name, int year_start, int university_year):
        Human(age, name), year_start(year_start), university_year(university_year){

}

std::ostream &operator<< (std::ostream &out, const Human &self){
    out << "Name: " << self.name << std::endl;
    out << "Age: " << self.age << std::endl;
    return out << std::endl;
};

std::ostream &operator<< (std::ostream &out, const Student &self){
    out << "Name: " << self.name << std::endl;
    out << "Age: " << self.age << std::endl;
    out << "Year of start education: " << self.year_start << std::endl;
    out << "Year of education: " << self.university_year << std::endl;
    
    return out << std::endl;
};
