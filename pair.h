/* Wykonano dnia 05.04.2021 - Jakub Półtoraczyk */

/* Klasa szablonowa reprezentująca pojęcie obiektu składającego się z dwoch elementów: właściwego elementu oraz klucza określającego stopień ważności tego elementu (priorytet). 
   Interfejs udostępnia podstawowe operacje pobierania i zmiany wartości obu elementów, a także możliwość porównywania między sobą obiektów klasy realizowanego na podstawie
   porównywania wartości klucza danego obiektu. Element właściwy ze względu na zastosowanie szablonu może być dowolnego typu. */

#ifndef PAIR_H
#define PAIR_H

template <typename T>
class Pair
{
    private:
        T message; // element właściwy
        int priority; // klucz (priorytet)
    public:
        Pair();
        Pair(const T &, int); // kolejno: właściwy element oraz klucz
        const T & get_message()const;
        int get_priority()const;
        void set_message(const T &);
        void set_priority(int);
        bool operator<(const Pair<T> &)const;
        bool operator<=(const Pair<T> &)const;
        bool operator>(const Pair<T> &)const;
        bool operator>=(const Pair<T> &)const;
};

#endif // PAIR_H