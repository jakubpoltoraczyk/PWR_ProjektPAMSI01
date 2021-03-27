#include <iostream>
#include "sequence.h"

int main()
{
    Sequence<int> object = Sequence<int>();
    object.add_front(12);
    object.add_front(22);
    object.add_front(30);
    object.remove_front();
    object.add_end(100);
    object.add_end(200);
    object.show_all();
    std::cout << "Pod pierwszym indeksem: " << object.get_element_by_index(3) << std::endl;
    std::cout << "Wartosc 100 jest pod indeksem: " << object.get_index_by_element(100) << std::endl;
    return 0;
}