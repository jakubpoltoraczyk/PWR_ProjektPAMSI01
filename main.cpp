#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "queue.h"
#include "pair.h"


int main()
{
    srand(time(0));
    Queue<Pair<std::string>> JohnDevice(QueueType::Normal);
    Queue<Pair<std::string>> AnnaDevice(QueueType::Priority);
    Queue<Pair<std::string>> IntermediateDevice(QueueType::Normal);
    std::string text;
    std::cout << std::endl << "Urzadzenie Johna - wpisz tresc wiadomosci: " << std::endl;
    for(int priority = 0; std::cin.peek() != '\n'; ++priority)
    {
        std::cin >> text;
        JohnDevice.enqueue(Pair<std::string>(text,priority));
    }
    bool add_to_AnnaDevice;
    while(!JohnDevice.is_empty())
    {
        Pair<std::string> temp = JohnDevice.peek();
        JohnDevice.dequeue();
        add_to_AnnaDevice = (std::rand()%2)+0;
        if(add_to_AnnaDevice)
        {
            AnnaDevice.enqueue(temp);
            IntermediateDevice.enqueue(temp);
        }
        else
            JohnDevice.enqueue(temp);
    }
    std::cout << std::endl << "Urzadzenie posrednie - podglad wiadomosci: " << std::endl;
    while(!IntermediateDevice.is_empty())
    {
        Pair<std::string> temp = IntermediateDevice.peek();
        IntermediateDevice.dequeue();
        std::cout << temp.get_message() << " ";
    }
    std::cout << std::endl << std::endl << "Urzadzenie Anny - odbior wiadomosci: " << std::endl;;
    while(!AnnaDevice.is_empty())
    {
        Pair<std::string> temp = AnnaDevice.peek();
        AnnaDevice.dequeue();
        std::cout << temp.get_message() << " ";
    }
    std::cout << std::endl;
    return 0;
}