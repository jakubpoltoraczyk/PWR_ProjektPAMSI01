#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"

template <typename T>
class List
{
    protected:
        Node<T> * head;
        Node<T> * tail;
        int beb;
    public:
        List();
        const T & front()const;
        void add_front(const T &);
        void remove_front();
        void add_end(const T &);
        bool is_empty()const;
        void show_all()const;
};  

#endif // LIST_H