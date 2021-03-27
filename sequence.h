#ifndef SEQUENCE_H
#define SEQUENCE_H

#include "list.h"

template <typename T>
class Sequence: public List<T>
{
    public:
        Sequence();
        int get_index_by_element(const T &)const;
        const T & get_element_by_index(int n)const;
};

#endif // SEQUENCE_H