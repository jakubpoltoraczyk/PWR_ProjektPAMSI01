#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "priority_list.h"

template <typename T>
class PriorityQueue
{
    private:
        PriorityList<T> elements;
        int number_of_elements;
    public:
        PriorityQueue();
        void enqueue(const T &);
        void dequeue();
        const T & peek()const;
        bool is_empty()const;
        int size()const;
};

#endif // PRIORITY_QUEUE_H