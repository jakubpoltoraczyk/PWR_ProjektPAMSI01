#include <iostream>
#include "priority_list.h"

int main()
{
    PriorityList<int> object = PriorityList<int>();
    object.add_by_priority(10);
    object.add_by_priority(100);
    object.add_by_priority(10);
    object.add_by_priority(5);
    object.add_by_priority(10000);
    object.add_by_priority(450);
    object.show_all();
    return 0;
}