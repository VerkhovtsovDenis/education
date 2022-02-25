@echo off
g++ -c .\src\human.cpp
g++ -c .\src\student.cpp
g++ -c .\src\main.cpp
g++ -o Main.exe .\src\main.cpp .\src\student.cpp .\src\human.cpp
del *.o
echo on
Main.exe