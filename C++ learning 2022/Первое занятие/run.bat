@echo off
g++ -c .\src\shop.cpp
g++ -c .\src\main.cpp
g++ -o Main.exe .\src\main.cpp .\src\shop.cpp
del *.o
echo on
Main.exe