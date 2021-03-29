#include <iostream>
#include "priority_queue.h"

int main()
{
    PriorityQueue<int> kolejka;
    int tab[10]{};
    kolejka.enqueue(5);
    kolejka.enqueue(10);
    kolejka.enqueue(3);
    kolejka.enqueue(25);
    for(int i = 0; i < 10 && !kolejka.is_empty(); ++i)
    {
        tab[i] = kolejka.peek();
        kolejka.dequeue();
    }
    for(auto & t: tab)
        std::cout << t << " ";
    std::cout << std::endl;
    return 0;
}