//
// Created by Dhevin N on 23/7/22.
//
#include "../LinkedList/LinkedList.c"

void initStack(LinkedList *this, int data) {
    initLinkedList(this, data);
}

int peek(LinkedList *this) {
    return peekHead(this);
}

int pop(LinkedList *this) {
    int data = peek(this);
    removeHead(this);
    return data;
}

void push(LinkedList *this, int data) {
    addHead(this, data);
}

struct Node* getTopNode(LinkedList *this) {
   return getHeadPointer(this);
}
