#include "list.h"

template <typename T>
List<T>::List(): head(nullptr)
{

}

template <typename T>
const T & List<T>::front()const
{
    return head->get_element();
}

template <typename T>
void List<T>::add_front(const T & elem)
{
    Node<T> * node = new Node<T> (elem);
    node->set_next(*head);
    head = node;
}

template <typename T>
void List<T>::remove_front()
{
    Node<T> * temp = head;
    head = head->get_next();
    delete temp;
}