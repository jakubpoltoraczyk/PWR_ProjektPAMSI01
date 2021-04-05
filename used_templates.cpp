/* Plik jawnie tworzący wybrane szablony konieczne dla odpowiedniego działania programu JohnAndAnna */

#include <string>
#include "pair.cpp"
#include "node.cpp"
#include "list.cpp"
#include "priority_list.cpp"
#include "queue.cpp"

template class Pair<std::string>;
template class Node<Pair<std::string>>;
template class List<Pair<std::string>>;
template class PriorityList<Pair<std::string>>;
template class Queue<Pair<std::string>>;