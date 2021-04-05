/* Klasa szablonowa reprezentująca listę jednokierunkową - strukturę danych umożliwiającą przechowywanie danych w postaci kolejnych węzłów, gdzie przemieszczanie się po kolejnych
   elementach listy następuje tylko w jednym kierunku (od początku do końca listy). Interfejs klasy udostępnia możliwość dokonywania podstawowych operacji na tj. dodawnia elementów 
   na początek i koniec listy, a także usuwania elementów z początku listy. Dodatkową operacją udostępnioną w ramach interfejsu klasy jest możliwość sprawdzenia czy lista jest pusta.
   Użycie szablonu klasy umożliwia dodawanie węzłów (elementów listy) dowolnego typu. */

#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"

template <typename T>
class List
{
    protected:
        Node<T> * head; // wskaźnik na początek listy (pierwszy węzeł)
        Node<T> * tail; // wskaźnik na koniec listy (ostatni węzeł)
    public:
        List();
        const T & front()const;
        virtual void add_front(const T &);
        void remove_front();
        virtual void add_end(const T &);
        bool is_empty()const;
};  

#endif // LIST_H