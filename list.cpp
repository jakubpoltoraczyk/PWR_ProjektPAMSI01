#include "list.h"

template <typename T>
List<T>::List(): head(nullptr), tail(nullptr)
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
    if(is_empty())
        tail = node;
    head = node;
}

template <typename T>
void List<T>::remove_front()
{
    Node<T> * temp = head;
    head = head->get_next();
    delete temp;
}

template <typename T>
void List<T>::add_end(const T & elem)
{
    if(List<T>::is_empty())
        List<T>::add_front(elem);
    else
    {
        Node<T> * node = new Node<T> (elem);
        tail->set_next(*node);
        tail = node;
    }
}

template <typename T>
bool List<T>::is_empty()const
{
    if(head == nullptr)
        return true;
    return false;
}