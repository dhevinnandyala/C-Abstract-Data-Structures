//
// Created by Dhevin N on 22/7/22.
//

#ifndef C_ADTS_LINKEDLIST_H
#define C_ADTS_LINKEDLIST_H

#include "../Node/Node.c"

typedef struct {
    struct Node *head;
    struct Node *tail;
    bool hasHead;
    bool hasTail;
    int size;
} LinkedList;

void initLinkedList(LinkedList *this, int data);

/* State Functions */

bool isEmpty(LinkedList *this);

bool hasHead(LinkedList *this);

bool hasTail(LinkedList *this);

/* Get Functions */

int getSize(LinkedList *this);

int peekHead(LinkedList *this);

int peekTail(LinkedList *this);

struct Node* getHeadPointer(LinkedList *this);

struct Node* getTailPointer(LinkedList *this);

/* Add Functions */

void addHead(LinkedList *this, int data);

void addTail(LinkedList *this, int data);

/* Search Functions */

bool contains(LinkedList *this, int data);

int count(LinkedList *this, int data);

struct Node* getNode(LinkedList *this, int data);

/* Remove functions */

int removeHead(LinkedList *this);

int removeTail(LinkedList *this);

bool remove(LinkedList *this, int data);

/* Sort functions */

void sort();

void reverse();

#endif //C_ADTS_LINKEDLIST_H
