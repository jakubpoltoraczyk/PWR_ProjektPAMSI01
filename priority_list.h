#ifndef PRIORITY_LIST_H
#define PRIORITY_LIST_H

#include "list.h"

template <typename T>
class PriorityList: public List<T>
{
    public:
        PriorityList();
        void add_by_priority(const T &);
};

#endif // PRIORITY_LIST_H