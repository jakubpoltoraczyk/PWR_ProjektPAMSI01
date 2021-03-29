#ifndef PAIR_H
#define PAIR_H

template <typename T>
class Pair
{
    private:
        T message;
        int priority;
    public:
        Pair();
        Pair(const T &, int);
        const T & get_message()const;
        int get_priority()const;
        void set_message(const T &);
        void set_priority(int);
        bool operator<(const Pair<T> &)const;
        bool operator<=(const Pair<T> &)const;
        bool operator>(const Pair<T> &)const;
        bool operator>=(const Pair<T> &)const;
};

#endif // PAIR_H