#ifndef _STUDENT_HPP_
#define _STUDENT_HPP_


class Human{
    public:
        Human(int age, const char *name);

    private:
        friend std::ostream& operator<<(std::ostream& out, const Human& self);

    protected:
        int age = 0;
        char name[30] = "";

};

class Student: private Human{
    public:
        Student(int age, const char *name, int year_start, int university_year);

    private:
        using Human::age;
        using Human::name;
        friend std::ostream &operator<< (std::ostream &out, const Student &self);

    protected:
        int year_start;
        int university_year;
        

};

#endif //_STUDENT_HPP_
