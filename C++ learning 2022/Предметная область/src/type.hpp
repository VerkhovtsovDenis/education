#ifndef _TYPE_HPP_
#define _TYPE_HPP_
#include <vector>
#include "human.hpp"
#include "student.hpp"
#include "group.hpp"
#include <set>

typedef std::vector<Human> vHuman_t;
typedef std::vector<Student> vStudent_t;
typedef std::vector<Group> vGroup_t;
std::set <uint8_t> allowed_input_window = {0, 1, 2, 3};

#endif //_TYPE_HPP_