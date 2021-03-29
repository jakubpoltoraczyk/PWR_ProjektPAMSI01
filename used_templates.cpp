#include <string>
#include "pair.cpp"
#include "node.cpp"
#include "list.cpp"
#include "priority_list.cpp"
#include "priority_queue.cpp"

template class Pair<std::string>;
template class Node<Pair<std::string>>;
template class List<Pair<std::string>>;
template class PriorityList<Pair<std::string>>;
template class PriorityQueue<Pair<std::string>>;