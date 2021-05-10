#include <iostream>
#include "newClass.hpp"

int main()
{

    uint16_t var1;
    uint16_t var2;

    std::cout << "Primer variable:\t";
    std::cin >> var1;

    std::cout << "segunda variable:\t";
    std::cin >> var2;

    std::cout << "Primer: " << var1 << "\tSegunda variable: " << var2 << std::endl;
    // std::cout << "to C \n";

    test nuevo;

    nuevo.display();

    nuevo.displayNumbers(5,6,4);
    nuevo.valorPublic = 5;
    return 0;
}
