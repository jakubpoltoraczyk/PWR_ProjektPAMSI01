#include <string>
#include "pair.cpp"
#include "node.cpp"
#include "list.cpp"

template class Pair<std::string>;
template class Node<Pair<std::string>>;
template class List<Pair<std::string>>;
template class List<double>;