#include "Person.h"
#include "vector.h"

int main() {
    Vector<Student> students;
    Vector<Teacher> teachers;
    students.add(Student());
    students.add(Student("Goncharuk", "Danil", "Maximovich", "B9120-09.03.04"));
    students.add(Student("Tsvetkov", "Stanislav ", "Olegovich", "B9120-09.03.04"));
    teachers.add(Teacher());
    teachers.add(Teacher("Chusova", "Alina", "Evgenievna", "Object oriented programming"));
    teachers.add(Teacher("Osipova", "Marina", "Anatolievna", "Mathematical analysis"));
    teachers.add(Teacher("Efremov", "Evgeniy", "Leonidovich", "Mathematical logic"));
    std::cout<<teachers<<std::endl;
    std::cout<<students<<std::endl;
    std::cout<<students.find(Student("Tsvetkov", "Stanislav ", "Olegovich", "B9120-09.03.04"))<<std::endl;
    std::cout<<teachers.find(Teacher("Smagin", "Sergey", "Vladimirovich", "Projects in IT"))<<std::endl;
    return 0;
}
