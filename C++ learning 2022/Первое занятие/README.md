#Занятие от 24.02.2020 по ООП

I. Первое занятие
1) Разбор SOLID принципов ()
2) Разбор GRASP принципов ()
3)Создание собственного класса Client. Предметная область - магазин. Человек имеет понятие о своей корзине, и умеет добавлять и удалять оттуда предметы типа item, хранящиися в коллекции (Order: vector<Order.Item>Items)

II. Второе занятие
1) Перегрузки функций add(double a, double b), add(int a, int b)
2) Шаблоны, template<class T>, template<typename T>
3) Анонимные функции auto add(auto a, auto b)
4) Специализация: определение для групп (чисел, объектов) template<>, Complex...
5) vector<bool> - слабая реализация
6) Концепты с++20 //TODO - поставить стандарт 20 года:
c++ 20 (Огр template: float, double)
#include <concepst>
template <std::floating_point T> T add(...)

c++ до 20 (Огр до стандарта 20 года) - https://en.cppreference.com/w/cpp/types/is_floating_point, 
https://en.cppreference.com/w/cpp/concepts/floating_point

template std::enable_if_t <std:is_same<float>::value || std:is_same<int>::value || std:is_same<double>::value> T add()

Дополнительно о структурах данных и алгоритмах: https://hackingcpp.com/cpp/cheat_sheets.html?s=09
Дополнительно о SOLID принципах: https://bool.dev/blog/detail/grasp-printsipy#:~:text=GRASP%20%2D%20general%20responsibility%20assignment%20software,%D0%BD%D0%B0%D0%B7%D0%BD%D0%B0%D1%87%D0%B5%D0%BD%D0%B8%D1%8E%20%D0%BE%D1%82%D0%B2%D0%B5%D1%82%D1%81%D1%82%D0%B2%D0%B5%D0%BD%D0%BD%D0%BE%D1%81%D1%82%D0%B5%D0%B9%20%D0%BA%D0%BB%D0%B0%D1%81%D1%81%D0%B0%D0%BC%20%D0%B8%20%D0%BE%D0%B1%D1%8A%D0%B5%D0%BA%D1%82%D0%B0%D0%BC