//
// Created by Dhevin N on 22/7/22.
//
#include "LinkedList.h"
#include "../Node/Node.c"

typedef struct {
    struct Node *head;
    struct Node *tail;
    bool hasHead;
    bool hasTail;
    int size;
} LinkedList;

void initLinkedList(LinkedList *this, int data) {
    struct Node newNode;
    initNode(&newNode, data);
    this->head = &newNode;
    this->tail = &newNode;
    this->hasHead = true;
    this->hasTail = true;
    this->size = 1;
}

/* State Functions */

bool isEmpty(LinkedList *this) {
    if (this->size == 0) {
        return true;
    } return false;
}

bool hasHead(LinkedList *this) {
    return this->hasHead;
}

bool hasTail(LinkedList *this) {
    return this->hasTail;
}

/* Get Functions */

int getSize(LinkedList *this) {
    return this->size;
}

int peekHead(LinkedList *this) {
    if (this->hasHead) {
        return getData(this->head);
    }
    return INT32_MIN;
}

int peekTail(LinkedList *this) {
    if(this->hasHead) {
        return getData(this->head);
    }
    return INT32_MIN;
}

struct Node* getHeadPointer(LinkedList *this) {
    if (this->hasHead) {
        return this->head;
    }
    return 0;
}

struct Node* getTailPointer(LinkedList *this) {
    if(this->hasTail) {
        return this->tail;
    }
    return 0;
}

/* Add Functions */

void addHead(LinkedList *this, int data) {
    if (getSize(this) == 0) {
        initLinkedList(this, data);
        return;
    }
    struct Node new;
    initNode(&new, data);
    setRight(&new, this->head);

    this->head = &new;
    this->size++;
}

void addTail(LinkedList *this, int data) {
    if (getSize(this) == 0) {
        initLinkedList(this, data);
        return;
    }

    struct Node new;
    initNode(&new, data);
    setLeft(&new, this->tail);

    this->tail = &new;
    this->size++;
}

/* Search Functions */

bool contains(LinkedList *this, int data) {
    struct Node *cur = getHeadPointer(this);
    while (cur != 0) {
        if (getData(cur) == data) {
            return true;
        } else {
            cur = getRight(cur);
        }
    } return false;
}

int count(LinkedList *this, int data) {
    struct Node *cur = getHeadPointer(this);
    int count = 0;
    while (cur != 0) {
        if (getData(cur) == data) {
            count++;
        }
        cur = getRight(cur);
    }
    return count;
}

struct Node* getNode(LinkedList *this, int data) {
    struct Node *cur = getHeadPointer(this);
    while (cur != 0) {
        if (getData(cur) == data) {
            return cur;
        } else {
            cur = getRight(cur);
        }
    } return 0;
}

/* Remove functions */

int removeHead(LinkedList *this) {
    int data = peekHead(this);
    if (getSize(this) == 0) return INT32_MIN;
    if (getSize(this) == 1) {
        this->tail = NULL;
    }
    this->head = getRight(this->head);
    this->size--;
    return data;
}

int removeTail(LinkedList *this) {
    int data = peekHead(this);
    if (getSize(this) == 0) return INT32_MIN;
    if (getSize(this) == 1) this->head = NULL;
    this->tail = getLeft(this->tail);
    return data;
}

bool remove(LinkedList *this, int data) {
    struct Node *thisNode = getNode(this, data);
    if (thisNode == 0) return false;

    if (getSize(this) == 1) {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
        this->hasHead = false;
        this->hasTail = false;
        return true;
    }

    if (getHeadPointer(this) == thisNode) {
        removeHead(this);
        return true;
    }

    if (getTailPointer(this) == thisNode) {
        removeTail(this);
        return false;
    }

    setRight(getLeft(thisNode), getRight(thisNode));
    setLeft(getRight(thisNode), getLeft(thisNode));
    free(thisNode);
    return true;
}

/* Sort functions */ //todo: implement these-- use Merge Sort? Or maybe in some cases it's faster to copy it

void sort();

void reverse();