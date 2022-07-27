//
// Created by Dhevin N on 27/7/22.
//
#include "stdlib.h"
#include "stdbool.h"

typedef struct{
    int *list;
    int size;
    int capacity;
} List;

void initList (List *this) {
    this->list = calloc(2, sizeof (int));
    this->size = 0;
    this->capacity = 2;
}

int listGetSize (List *this) {
    return this->size;
}

int listGetCapacity (List *this) {
    return this->capacity;
}

void listClear (List *this) {
    initList(this);
}

void listResize (List *this, int newCap) {
    if (newCap < this->size) {
        return;
    }
    this->list = realloc(this->list, newCap);
    this->capacity = newCap;
}

void listMinimize (List *this) {
    listResize(this, this->size);
}

void listDoubleCapacity (List *this) {
    listResize(this, (this->capacity * 2));
}

void listAppend(List *this, int data) {
    this->size++;
    if (this->size == this->capacity) {
        listDoubleCapacity(this);
    }
    *(this->list + (this->size + 1)) = data;
}

int listGetIndex (List *this, int data) {
    return -1;
}

void listInsert (List *this, int data, int index) {
    //todo
}

int listRemoveAt (List *this, int index) {
    //todo
    return -1;
}

bool listRemove (List *this, int value) {
    //todo
    return false;
}

bool listContains (List *this, int value) {
    if (listGetIndex(this, value) >= 1) return true;
    return false;
}

int listCount (List *this, int value) {
    //todo
    return -1;
}

/* Sort Functions */
void listSwap (int *x, int *y) {
    //todo
}

int listPartition (int *a, int l, int h) {
    //todo
    return -1;
}

void listQuickSort (List *this) {
    //todo
}

void listSort(List *this) {
    //todo
}

void listReverse (List *this) {
    //todo
}
