//
// Created by Dhevin N on 23/7/22.
//
#include "../LinkedList/LinkedList.c"

void initStack(LinkedList *this, int data) {
    initLinkedList(this, data);
}

int stackPeek(LinkedList *this) {
    return linkedListPeekHead(this);
}

int stackPop(LinkedList *this) {
    return linkedListRemoveHead(this);
}

void stackPush(LinkedList *this, int data) {
    linkedListAddHead(this, data);
}
