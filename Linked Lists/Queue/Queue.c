//
// Created by Dhevin N on 25/7/22.
//
#include "../LinkedList/LinkedList.c"

void initQueue(LinkedList *this, int data) {
    initLinkedList(this, data);
}

int queuePeek(LinkedList *this) {
    return linkedListPeekTail(this);
}

int queueDequeue(LinkedList *this) {
    return linkedListRemoveTail(this);
}

void queueEnqueue(LinkedList *this, int data) {
    linkedListAddHead(this, data);
}