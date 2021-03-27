#include <iostream>
#include "list.h"

int main()
{
    List<int> lista = List<int>();
    lista.add_front(1);
    lista.add_front(2);
    lista.add_front(3);
    lista.add_front(4);
    lista.add_end(0);
    lista.remove_front();
    lista.show_all();
    return 0;
}