#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"
#include "priority_list.h"

enum QueueType {Normal, Priority};

template <typename T>
class Queue
{
    private:
        QueueType type;
        List<T> * elements;
        int number_of_elements;
    public:
        explicit Queue(const QueueType &);
        ~Queue();
        void enqueue(const T &);
        void dequeue();
        const T & peek()const;
        bool is_empty()const;
        int size()const;
};

#endif // QUEUE_H