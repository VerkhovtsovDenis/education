#ifndef _INTERFACE_HPP
#define _INTERFACE_HPP
#include "human.hpp"
#include "student.hpp"
#include "group.hpp"
#include <vector>

class Interface{
public:
    Interface();

private:
    void main();

    uint8_t getRequest(uint8_t);
    void command_info(uint8_t);

    template<class T>
    void print(const T &);

    template<class T>
    void add(T&);

    template<class T>
    void del(T&);

    std::vector <Human> vHuman;
    std::vector <Student> vStudent;
    std::vector <Group> vGroup;
};


#endif //_INTERFACE_HPP
