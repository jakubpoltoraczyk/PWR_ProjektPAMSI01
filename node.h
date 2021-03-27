#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
    private:
        Node<T> * next;
        T element;
    public:
        explicit Node(const T &);
        const T & get_element()const;
        Node<T> * get_next()const;
        void set_element(const T &);
        void set_next(Node<T> &);
};

#endif // NODE_H