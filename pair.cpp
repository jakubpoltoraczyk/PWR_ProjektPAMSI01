#include "pair.h"

template<typename T>
Pair<T>::Pair(const T & mess, int prior): message(mess), priority(prior)
{

}

template<typename T>
const T & Pair<T>::get_message()const
{
    return message;
}

template<typename T>
int Pair<T>::get_priority()const
{
    return priority;
}

template<typename T>
void Pair<T>::set_message(const T & mess)
{
    message = mess;
}

template<typename T>
void Pair<T>::set_priority(int prior)
{
    priority = prior;
}