#include "queue.h"

template <typename T>
Queue<T>::Queue(const QueueType & t): type(t), number_of_elements(0)
{
    if(type == QueueType::Normal)
        elements = new List<T>;
    else
        elements = new PriorityList<T>;
}

template <typename T>
Queue<T>::~Queue()
{
    delete elements;
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