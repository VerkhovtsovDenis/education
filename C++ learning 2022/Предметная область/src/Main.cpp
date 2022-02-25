#include <iostream>
#include "student.hpp"
#include "human.hpp"

int main(){
    Student Denis(19, "Denis", 2020, 2, "B9120-09.03.04ProgInj");
    Student Ivan(21, "Ivan", 2025, 3, "B9120-09.03.04ProgInj");
    Human Dmitry(35, "Dmitry");
    
    std::cout << Denis << Ivan << Dmitry;

    system("Pause");
    return 0;
};

// To run a program use "g++ -o app.exe .\\student.cpp .\\Main.cpp"