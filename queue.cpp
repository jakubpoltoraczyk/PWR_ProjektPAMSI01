/* Wykonano dnia 05.04.2021 - Jakub Półtoraczyk */

#include "queue.h"

template <typename T>
Queue<T>::Queue(const QueueType & t): type(t), number_of_elements(0)
{
    if(type == QueueType::Normal)
        elements = new List<T>; // alokacja pamięci dla normalnej kolejki (poprzez alokację pamięci dla zwykłej listy jednokierunkowej)
    else
        elements = new PriorityList<T>; // alokacja pamięci dla priorytetowej kolejki (poprzez alokację pamięci dla priorytetowej listy jednokierunkowej)
}

template <typename T>
Queue<T>::~Queue()
{
    delete elements; // dealokacja pamięci listy jednokierunkowej (usunięcie pamięci przydzielonej dla wszystkich elementów kolejki)
}

template <typename T>
void Queue<T>::enqueue(const T & elem)
{
    elements->add_end(elem);
    ++number_of_elements;
}

template <typename T>
void Queue<T>::dequeue()
{
    elements->remove_front();
    --number_of_elements;
}

template <typename T>
const T & Queue<T>::peek()const
{
    return elements->front();
}

template <typename T>
bool Queue<T>::is_empty()const
{
    if(number_of_elements == 0)
        return true;
    return false;
}

template <typename T>
int Queue<T>::size()const
{
    return number_of_elements;
} 