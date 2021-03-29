#include "priority_queue.h"

template <typename T>
PriorityQueue<T>::PriorityQueue(): elements(), number_of_elements(0)
{

}

template <typename T>
void PriorityQueue<T>::enqueue(const T & elem)
{
    elements.add_by_priority(elem);
    ++number_of_elements;
}

template <typename T>
void PriorityQueue<T>::dequeue()
{
    elements.remove_front();
    --number_of_elements;
}

template <typename T>
const T & PriorityQueue<T>::peek()const
{
    return elements.front();
}

template <typename T>
bool PriorityQueue<T>::is_empty()const
{
    if(number_of_elements == 0)
        return true;
    return false;
}

template <typename T>
int PriorityQueue<T>::size()const
{
    return number_of_elements;
} 