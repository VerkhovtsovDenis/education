#ifndef _STUDENT_HPP_
#define _STUDENT_HPP_
#include "human.hpp"

class Student: private Human
{
public:
    Student(uint8_t age, const char *name, uint16_t year_start, uint8_t university_year, const char *group);

private:
    using Human::age;
    using Human::name;
    friend std::ostream &operator<< (std::ostream &out, const Student &self);

protected:
    uint16_t year_start;
    uint8_t university_year;
    char group[10];
};

#endif //_STUDENT_HPP_
