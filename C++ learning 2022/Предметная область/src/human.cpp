#include <ostream>
#include <cstring>
#include "human.hpp"

Human::Human(uint8_t age, const char *name):age(age){
    strcpy(this->name, name);
}

std::ostream &operator<< (std::ostream &out, const Human &self){
    out << "Name: " << self.name << std::endl;
    out << "Age: " << (uint16_t)self.age << std::endl;
    return out << std::endl;
};

