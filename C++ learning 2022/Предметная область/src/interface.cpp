#include <iostream>
#include "interface.hpp"
#include <cassert> // для assert()
#include "type.hpp"

#define char_0 48

Interface::Interface()
{
    setlocale(0, "");
    main();
};

void Interface::main()
{
    uint16_t window = 0;
    uint16_t command = 0;
    while (true)
    {
        command_info(0);
        window = Interface::getRequest(0);

        if (window == 0)
            return;

        command_info(window);
        command = Interface::getRequest(window);
        if (command == 0)
            continue;

        switch (window)
        {
        case 1:
            switch (command)
            {
            case 1:
                add(vHuman);
                break;
            case 2:
                add(vStudent);
            case 3:
                add(vGroup);
            default:
                break;
            }
            break;

        case 2:
            switch (command)
            {
            case 1:
                del(vHuman);
                break;
            case 2:
                del(vStudent);
                break;
            case 3:
                del(vGroup);
                break;
            default:
                break;
            }
            break;
        case 3:
            switch (command)
            {
            case 1:
                print(vHuman);
                break;
            case 2:
                print(vStudent);
                break;
            case 3:
                print(vGroup);
                break;
            default:
                break;
            }
            break;

        default:
            break;
        }

        std::cin.get();
        system("cls");
    }
};

uint8_t Interface::getRequest(uint8_t case_status = 0)
{
    uint8_t command = 0;

    while (true)
    {
        std::cout << "Введите номер команды: ";
        std::cin >> command;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            system("cls");
            std::cout << "Некорректный ввод!" << std::endl;
        }
        else if (allowed_input_window.find(command - char_0) != allowed_input_window.end())
            return command - char_0;
        else
        {
            system("cls");
            std::cout << "Некорректный ввод!" << std::endl;
        }
    }
}

void Interface::command_info(uint8_t case_status = 0)
{
    switch (case_status)
    {
    case 0:
        std::cout << "1. Добавить объект." << std::endl;
        std::cout << "2. Удалить объект." << std::endl;
        std::cout << "3. Вывести информацию об объекте." << std::endl;
        std::cout << "0. Закрыть программу." << std::endl;
        break;

    case 1:
        std::cout << "1.1. Добавить человека." << std::endl;
        std::cout << "1.2. Добавить студента." << std::endl;
        std::cout << "1.3. Добавить группу." << std::endl;
        break;

    case 2:
        std::cout << "2.1. Удалить человека." << std::endl;
        std::cout << "2.2. Удалить студента." << std::endl;
        std::cout << "2.3. Удалить группу." << std::endl;
        break;

    case 3:
        std::cout << "3.1. Вывести на экран информацию о человека." << std::endl;
        std::cout << "3.2. Вывести на экран информацию о студента." << std::endl;
        std::cout << "3.3. Вывести на экран информацию о группу." << std::endl;
        break;

    default:
        std::cout << "Команда не распознана." << std::endl;
        break;
    }
}

template <class T>
void Interface::print(const T &self)
{
    std::for_each(self.cbegin(), self.cend(), print)
}

template <class T>
void Interface::add(T &self)
{
    std::cin >> self;
}

template <class T1, class T2>
void del(T1 parent, T2 daughter)
{
    parent - daughter;
};