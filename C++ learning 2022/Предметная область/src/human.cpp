#include <ostream>
#include <istream>
#include <vector>
#include <cstring>
#include "human.hpp"
#include "type.hpp"
#include <string>
#include <iostream>

Human::Human(uint8_t age, const char *name) : age(age)
{
    strcpy(this->name, name);
}

std::ostream &operator<<(std::ostream &out, const Human &self)
{
    out << "Name: " << self.name << std::endl;
    out << "Age: " << (uint16_t)self.age << std::endl;
    return out << std::endl;
};

std::ostream &operator<<(std::ostream &out, const std::vector<Human> &self)
{
    for (auto self_item : self)
    {
        std::cout << self_item << std::endl;
    }
    return out << std::endl;
};

std::istream &operator>>(std::istream &in, std::vector<Human> &vHuman)
{
    int age;
    char name[30];

    in >> age;
    in.getline(name, 30);

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        system("cls");
    }

    vHuman.push_back(Human((uint8_t)age, name));
    return in;
};
