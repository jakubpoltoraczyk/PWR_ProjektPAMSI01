#include <iostream>
#include "list.h"

int main()
{
    List<double> lista = List<double>();
    lista.add_front(5.6);
    std::cout << lista.front() << std::endl;
    lista.add_front(9.0);
    std::cout << lista.front() << std::endl;
    lista.remove_front();
    std::cout << lista.front() << std::endl;
    return 0;
}