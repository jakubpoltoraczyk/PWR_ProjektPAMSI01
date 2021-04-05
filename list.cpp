/* Wykonano dnia 05.04.2021 - Jakub Półtoraczyk */

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
    Node<T> * node = new Node<T> (elem); // alokacja pamięci dla nowego węzła (utworzenie nowego elementu listy)
    node->set_next(*head);
    if(is_empty()) // jeśli lista pusta
        tail = node; // koniec listy ma być także jej początkiem
    head = node;
}

template <typename T>
void List<T>::remove_front()
{
    Node<T> * temp = head;
    head = head->get_next();
    delete temp; // dealokacja pamięci dla usuwanego węzła (usunięcie elementu listy)
}

template <typename T>
void List<T>::add_end(const T & elem)
{
    if(List<T>::is_empty()) // jeśli lista jest pusta
        List<T>::add_front(elem); // dodaj na początek pierwszy element listy
    else // dodaj na koniec nowy element
    {
        Node<T> * node = new Node<T> (elem); // alokacja pamięci dla nowego węzła (elementu listy)
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