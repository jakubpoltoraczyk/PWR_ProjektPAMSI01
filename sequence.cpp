#include "sequence.h"

template <typename T>
Sequence<T>::Sequence(): List<T>()
{

}

template <typename T>
int Sequence<T>::get_index_by_element(const T & elem)const
{
    int number = 0;
    Node<T> * node = List<T>::head;
    while(node->get_element() != elem)
    {
        node = node->get_next();
        ++number;
    }
    return number;
}

template <typename T>
const T & Sequence<T>::get_element_by_index(int n)const
{
    Node<T> * node = List<T>::head;
    for(int i = 0; i < n; node = node->get_next(), ++i);
    return node->get_element();
}