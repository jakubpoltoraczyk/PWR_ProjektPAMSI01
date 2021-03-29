#include <iostream>
#include <string>
#include "pair.h"
#include "priority_queue.h"

int main()
{
    int size = 10, prior = 0;
    std::string mess;
    PriorityQueue<Pair<std::string>> kolejka;
    for(int i = 0; i < size; ++i)
    {
        std::cin >> mess;
        std::cin.get();
        std::cin >> prior;
        std::cin.get();
        kolejka.enqueue(Pair<std::string>(mess,prior));
    }
    std::cout << "Rozmiar kolejki: " << kolejka.size() << std::endl;
    while(kolejka.size())
    {
        Pair<std::string> temp;;
        temp = kolejka.peek();
        kolejka.dequeue();
        std::cout << temp.get_message() << " ";
    }
    std::cout << std::endl;
    return 0;
}