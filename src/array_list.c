#include <stdlib.h>
#include "../include/galloc/array_list.h"

//static 

void InitializeArrayList(ArrayList* list, size_t capacity, size_t elementSize) {
    list->elements = malloc(capacity * elementSize);
    list->capacity = capacity;
    list->elementSize = elementSize;
    list->size = 0;
}

void DestroyArrayList(ArrayList* list) {
    free(list->elements);
    list->capacity = 0;
    list->size = 0;
    list->elementSize = 0;
}

void ArrayListAdd(ArrayList* list, void* element) {
    if(list != NULL) {
        if(list->size >= list->capacity) {
            ResizeArrayList(list);
        }

        void* destination = (char*)list->elements + list->size * list->elementSize;
        memcpy(destination, element, list->elementSize);
        list->size++;
    } 
}

void* ArrayListGet(ArrayList* list, size_t index) {
    if(list == NULL || index > list->size) {
        return NULL;
    }

    size_t offset = index * list->elementSize;
    void* result =  (char*)list->elements + offset;
    return result;
}

static void ResizeArrayList(ArrayList* list) {

}