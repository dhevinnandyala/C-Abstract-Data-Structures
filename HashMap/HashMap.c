//
// Created by Dhevin N on 27/7/22.
//
#include "../LinkedList/LinkedList.c"

typedef struct {
    LinkedList *list;
    int levels;
    int size;

} HashMap;

void initHashMap(HashMap *this, int levels) {
    this->list = calloc(levels, sizeof (LinkedList*));
    this->levels = levels;
}

int hash(HashMap *this, int data) {
    return (data % this->levels) - 1;
}

int add(HashMap *this, int data) {
    int level = hash(this, data);
    linkedListAddHead(((this->list) + level), data);
    this->size++;
    return level;
}

bool contains(HashMap *this, int value) {
    int level = hash(this, value);
    return linkedListContains(this->list + level, value);
}

//todo