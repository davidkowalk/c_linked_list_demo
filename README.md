# c_linked_list_demo

This is a demo to show off my implementation of linked lists in C using structs. This is meant to be for learners who need an example.

The memory is allocated manually with `malloc()` because the compiler would free it otherwise after every iteration of the while-loop. This way you would end up with a linked list consisting only of the first and the last item.

The string node is currently unused but could be very easily implemented with only a few changes.

**Challenge for learners:** Find a way to implement str_node into the existing linked list.
