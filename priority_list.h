#ifndef PRIORITY_LIST_H
#define PRIORITY_LIST_H

#include "list.h"

template <typename T>
class PriorityList: public List<T>
{
    private:
        void add_by_priority(const T &);
    public:
        PriorityList();
        virtual void add_front(const T &);
        virtual void add_end(const T &);
};

#endif // PRIORITY_LIST_H