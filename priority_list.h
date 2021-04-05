/* Wykonano dnia 05.04.2021 - Jakub Półtoraczyk */

/* Klasa szablonowa reprezentująca posortowaną listę jednokierunkową - strukturę danych analogiczną dla zwykłej listy jednokierunkowej, z wyjątkiem faktu, że każdy element listy o danym
   kluczu (priorytecie) umieszczany jest pomiędzy elementem listy o niższym priorytecie oraz elementem listy o wyższym priorytecie. Interfejs klasy udostępnia identyczne operacje, jakie
   udostępnia zwykła lista jednokierunkowa, z tym że operacja dodawania elementu do listy (na początek lub koniec) oparta jest o nową prywatna metodą dodająca dany element na odpowiednim 
   względem klucza miejscu. Szablon klasy udostępnia możliwośc dodawania do listy elementów o dowolnym typie. */

#ifndef PRIORITY_LIST_H
#define PRIORITY_LIST_H

#include "list.h"

template <typename T>
class PriorityList: public List<T> // dziedziczenie po zwykłej liście jednokierunkowej
{
    private:
        void add_by_priority(const T &); // prywatna metoda dodająca nowy element do listy na odpowiednie względem jego priorytetu miejsce
    public:
        PriorityList();
        virtual void add_front(const T &);
        virtual void add_end(const T &);
};

#endif // PRIORITY_LIST_H