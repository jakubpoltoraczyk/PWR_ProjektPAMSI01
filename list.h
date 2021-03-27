#ifndef LIST_H
#define LIST_H

#include "node.h"

template <typename T>
class List
{
    private:
        Node<T> * head;
    public:
        List();
        const T & front()const;
        void add_front(const T &);
        void remove_front();
};  

#endif // LIST_H