#include "priority_list.h"
#include <iostream>
template <typename T>
PriorityList<T>::PriorityList(): List<T>()
{

}

template <typename T>
void PriorityList<T>::add_by_priority(const T & elem)
{
    if(List<T>::is_empty() || List<T>::head->get_element() > elem)
        List<T>::add_front(elem);
    else if(List<T>::tail->get_element() < elem)
        List<T>::add_end(elem);
    else
    {
        Node<T> * actual = List<T>::head;
        Node<T> * previous;
        while(actual->get_element() <= elem)
        {
            previous = actual;
            actual = actual->get_next();
        }
        Node<T> * node = new Node<T>(elem);
        previous->set_next(*node);
        node->set_next(*actual);
    }
}