@echo off
g++ -c .\src\human.cpp
g++ -c .\src\student.cpp
g++ -c .\src\interface.cpp
g++ -c .\src\group.cpp
g++ -c .\src\type.cpp
g++ -c .\src\main.cpp
g++ -o Main.exe .\src\main.cpp  .\src\group.cpp .\src\student.cpp .\src\human.cpp .\src\interface.cpp g++ -c .\src\type.cpp
pause
del *.o
echo on
Main.exe