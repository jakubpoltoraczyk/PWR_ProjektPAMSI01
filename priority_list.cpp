#include "priority_list.h"
#include <iostream>
template <typename T>
PriorityList<T>::PriorityList(): List<T>()
{

}

template <typename T>
void PriorityList<T>::add_by_priority(const T & elem)
{
    if(List<T>::is_empty() || List<T>::head->get_element() > elem) // jeśli lista jest pusta lub nowy element jest pierwszy względem priorytetu
        List<T>::add_front(elem); // wykorzystaj odziedziczona metode dodania elementu na początek zwykłej listy jednokierunkowej
    else if(List<T>::tail->get_element() < elem) // jeśli nowy element jest ostatni względem priorytetu
        List<T>::add_end(elem); // wykorzystaj odziedziczona metoda dodania elementu na koniec zwykłej listy jednokierunkowej
    else // jeśli żadne z powyższych
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

template <typename T>
void PriorityList<T>::add_front(const T & elem) // nowa definicja metody dodawania do listy (oparta na dodaniu elementu w odpowiednie miejsce)
{
    PriorityList<T>::add_by_priority(elem);
}

template <typename T>
void PriorityList<T>::add_end(const T & elem) // nowa definicja metody dodawania do listy (oparta na dodaniu elementu w odpowiednie miejsce)
{
    PriorityList<T>::add_by_priority(elem);
}