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
    public:
        List();
        const T & front()const;
        virtual void add_front(const T &);
        void remove_front();
        virtual void add_end(const T &);
        bool is_empty()const;
};  

#endif // LIST_H