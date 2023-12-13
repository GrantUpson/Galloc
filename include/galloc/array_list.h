#ifndef GALLOC_ARRAY_LIST_H
#define GALLOC_ARRAY_LIST_H

typedef struct ArrayList {
    void* elements;
    size_t size;
    size_t capacity;
    size_t elementSize;
} ArrayList;


void InitializeArrayList(ArrayList* list, size_t capacity, size_t elementSize);
void DestroyArrayList(ArrayList* list);

void ArrayListAdd(ArrayList* list, void* element);
void* ArrayListGet(ArrayList* list, size_t index);

static void ResizeArrayList(ArrayList* list);

#endif