#ifndef SOMETHING_PERSON_H
#define SOMETHING_PERSON_H

#include <iostream>
#include <string>

class Person {
protected:
    std::string _surname;
    std::string _name;
    std::string _patronymic;
public:
    Person():_surname("Verkhovtcov"), _name("Denis"), _patronymic("Olegovich"){}
    Person(std::string surname, std::string name, std::string patronymic):_surname(surname), _name(name), _patronymic(patronymic) {}
};

class Student:public Person{
    std::string _group;
public:
    Student():Person(){
        _group = "B9120-09.03.04";
    }
    Student(std::string surname, std::string name, std::string patronymic, std::string group)
    :Person(surname, name, patronymic){
        _group = group;
    }
    void Go_To_University();
    friend std::ostream& operator<<(std::ostream& os, const Student& person){
        os<<"Surname: "<<person._surname<<std::endl;
        os<<"Name: "<<person._name<<std::endl;
        os<<"Patronymic: "<<person._patronymic<<std::endl;
        os<<"Group: "<<person._group<<std::endl;
        return os;
    }

    bool operator==(const Student& person){
        return _surname == person._surname &&
                _name == person._name &&
                _patronymic == person._patronymic &&
                _group == person._group;
    }

    bool operator!=(const Student& person){
        return !(*this == person);
    }
};

class Teacher:public Person{
    std::string _discipline;
public:
    Teacher():Person(){
        _discipline = "Object oriented programming";
    }
    Teacher(std::string surname, std::string name, std::string patronymic, std::string discipline):
    Person(surname, name, patronymic){
        _discipline = discipline;
    }
    void Work();
    friend std::ostream& operator<<(std::ostream& os, const Teacher& person){
        os<<"Surname: "<<person._surname<<std::endl;
        os<<"Name: "<<person._name<<std::endl;
        os<<"Patronymic: "<<person._patronymic<<std::endl;
        os<<"Discipline: "<<person._discipline<<std::endl;
        return os;
    }
    bool operator==(const Teacher& person){
        return _surname == person._surname &&
               _name == person._name &&
               _patronymic == person._patronymic &&
                _discipline == person._discipline;
    }

    bool operator!=(const Teacher& person){
        return !(*this == person);
    }
};

void Student::Go_To_University() {
    std::cout<<*this<<"went to university";
}



void Teacher::Work() {
    std::cout<<*this<<"went to work";
}
#endif //SOMETHING_PERSON_H