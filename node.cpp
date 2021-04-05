#include "node.h"

template <typename T>
Node<T>::Node(const T & elem): next(nullptr), element(elem)
{

}

template <typename T>
const T & Node<T>::get_element()const
{
    return element;
}

template <typename T>
Node<T> * Node<T>::get_next()const
{
    return next;
}

template <typename T>
void Node<T>::set_element(const T & elem)
{
    element = elem;
}

template <typename T>
void Node<T>::set_next(Node<T> & node)
{
    next = &node; // ustawienie wskaźnika na kolejny węzeł adresem podanego węzła
}
