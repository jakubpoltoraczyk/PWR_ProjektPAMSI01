/* Wykonano dnia 05.04.2021 - Jakub Półtoraczyk */

/* Klasa szablonowa reprezentująca kolejkę (normalną opartą o zwykła listę jednokierunkową oraz priorytetową opartą o posortowaną listę jednokierunkową), czyli strukturę danych typu FIFO. 
   Interfejs klasy udostępnia możliwość wyboru typu kolejki, od którego zależne jest działanie niektórych metod klasy - zatem m.in. elementy kolejki priorytetowej będą ustawione względem 
   klucza, natomiast elementy zwykłej kolejki ustawione zostaną względem ich kolejności wstawienia do kolejki. Oprócz tego istnieje kilka dodatkowych metod umożliwiających wygodne 
   stosowanie przez użytkownika wybranej struktury danych. Szablon klasy umożliwia korzystanie z kolejki dla dowolnych typów jej elementów. */

#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"
#include "priority_list.h"

enum QueueType {Normal, Priority}; // rodzaj kolejki: normalna i priorytetowa

template <typename T>
class Queue
{
    private:
        QueueType type; // typ kolejki
        List<T> * elements; // wskaźnik na listę reprezentująca elementy kolejki
        int number_of_elements; // liczba wszystkich elementów kolejki
    public:
        explicit Queue(const QueueType &); // podanie typu kolejki
        ~Queue();
        void enqueue(const T &);
        void dequeue();
        const T & peek()const;
        bool is_empty()const;
        int size()const;
};

#endif // QUEUE_H