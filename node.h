/* Klasa szablonowa reprezentująca węzeł - struktura danych składająca się z elementu oraz wskaźnika na kolejny węzeł.
   Interfejs klasy udostępnia możliwość pobierania aktualnej i ustawiania nowej wartości zarówno elementu jak i wskaźnika na kolejny węzeł. 
   Dzięki zastosowaniu szablonu typ przechowywanego elementu może być dowolny. */

#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
    private:
        Node<T> * next; // wskaźnik na kolejny węzeł
        T element; // element przechowywany w danym węźle
    public:
        explicit Node(const T &); // podanie nowego elementu do przechowywania w węźle
        const T & get_element()const;
        Node<T> * get_next()const;
        void set_element(const T &);
        void set_next(Node<T> &);
};

#endif // NODE_H