@echo off
g++ -c .\src\student.cpp
g++ -c .\src\main.cpp
g++ -o Main.exe .\src\main.cpp .\src\student.cpp
del *.o
echo on
Main.exe