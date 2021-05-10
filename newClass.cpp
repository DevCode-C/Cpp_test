#include <iostream>
#include "newClass.hpp"

void test::display()
{
    std::cout << "Hola y bienvenidos" << std::endl;
    valor1 = 7;
    std::cout << "Bye"<< valor1 << std::endl;

    algo();
}

void test::displayNumbers(int a, int b, int c)
{
    std::cout << "Valor 1: " << a << std::endl;

    std::cout << "Valor 2: " << b << std::endl;

    std::cout << "Valor 3: " << c << std::endl;
}

void test::algo(void)
{
    std::cout << "No se" << std::endl;
}