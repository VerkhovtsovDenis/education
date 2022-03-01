#ifndef _HUMAN_HPP_
#define _HUMAN_HPP_
#include <iostream>
#include <vector>


class Human
{
public:
    Human();
    Human(uint8_t age, const char *name);

private:
    friend std::ostream &operator<<(std::ostream &out, const Human &self);
    

protected:
    uint8_t age = 0;
    char name[30] = "";
};

#endif //_HUMAN_HPP_
