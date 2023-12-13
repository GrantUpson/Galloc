#include <stdio.h>
#include "galloc/array_list.h"

int main(int argc, char** argv) {
    printf("Hello, from Galloc!\n");

    ArrayList mylist;
    InitializeArrayList(&mylist, 5, sizeof(size_t));

    //printf("Capacity: %zu \nSize: %zu, Element Size: %zu", mylist.capacity, mylist.size, mylist.elementSize);
    size_t num1 = 12;
    size_t num2 = 24;

    ArrayListAdd(&mylist, (void*)num1);
    ArrayListAdd(&mylist, (void*)num2);

    size_t* num3 = (size_t*)ArrayListGet(&mylist, 0);
    size_t* num4 = (size_t*)ArrayListGet(&mylist, 1);


    printf("Retrieved nums: %zu and %zu\n", *num3, *num4);

    return 0;
}
