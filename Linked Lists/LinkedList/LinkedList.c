//
// Created by Dhevin N on 22/7/22.
//
#include "../../Node/Node.c"

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

__attribute__((unused)) bool linkedListIsEmpty(LinkedList *this) {
    if (this->size == 0) {
        return true;
    } return false;
}

bool linkedListHasHead(LinkedList *this) {
    return this->hasHead;
}

bool linkedListHasTail(LinkedList *this) {
    return this->hasTail;
}

/* Get Functions */

int linkedListGetSize(LinkedList *this) {
    return this->size;
}

int linkedListPeekHead(LinkedList *this) {
    if (this->hasHead) {
        return getData(this->head);
    }
    return INT32_MIN;
}

int linkedListPeekTail(LinkedList *this) {
    if(this->hasHead) {
        return getData(this->head);
    }
    return INT32_MIN;
}

struct Node* linkedListGetHeadPointer(LinkedList *this) {
    if (this->hasHead) {
        return this->head;
    }
    return 0;
}

struct Node* linkedListGetTailPointer(LinkedList *this) {
    if(this->hasTail) {
        return this->tail;
    }
    return 0;
}

/* Add Functions */

void linkedListAddHead(LinkedList *this, int data) {
    if (linkedListGetSize(this) == 0) {
        initLinkedList(this, data);
        return;
    }
    struct Node new;
    initNode(&new, data);
    setRight(&new, this->head);

    this->head = &new;
    this->size++;
}

void linkedListAddTail(LinkedList *this, int data) {
    if (linkedListGetSize(this) == 0) {
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

bool linkedListContains(LinkedList *this, int data) {
    struct Node *cur = linkedListGetHeadPointer(this);
    while (cur != 0) {
        if (getData(cur) == data) {
            return true;
        } else {
            cur = getRight(cur);
        }
    } return false;
}

int linkedListCount(LinkedList *this, int data) {
    struct Node *cur = linkedListGetHeadPointer(this);
    int count = 0;
    while (cur != 0) {
        if (getData(cur) == data) {
            count++;
        }
        cur = getRight(cur);
    }
    return count;
}

struct Node* linkedListGetNode(LinkedList *this, int data) {
    struct Node *cur = linkedListGetHeadPointer(this);
    while (cur != 0) {
        if (getData(cur) == data) {
            return cur;
        } else {
            cur = getRight(cur);
        }
    } return 0;
}

/* Remove functions */

int linkedListRemoveHead(LinkedList *this) {
    int data = linkedListPeekHead(this);
    if (linkedListGetSize(this) == 0) return INT32_MIN;
    if (linkedListGetSize(this) == 1) {
        this->tail = NULL;
    }
    this->head = getRight(this->head);
    this->size--;
    return data;
}

int linkedListRemoveTail(LinkedList *this) {
    int data = linkedListPeekHead(this);
    if (linkedListGetSize(this) == 0) return INT32_MIN;
    if (linkedListGetSize(this) == 1) this->head = NULL;
    this->tail = getLeft(this->tail);
    return data;
}

bool linkedListRemove(LinkedList *this, int data) {
    struct Node *thisNode = linkedListGetNode(this, data);
    if (thisNode == 0) return false;

    if (linkedListGetSize(this) == 1) {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
        this->hasHead = false;
        this->hasTail = false;
        return true;
    }

    if (linkedListGetHeadPointer(this) == thisNode) {
        linkedListRemoveHead(this);
        return true;
    }

    if (linkedListGetTailPointer(this) == thisNode) {
        linkedListRemoveTail(this);
        return false;
    }

    setRight(getLeft(thisNode), getRight(thisNode));
    setLeft(getRight(thisNode), getLeft(thisNode));
    free(thisNode);
    return true;
}

/* Sort functions */ //todo: implement these-- use Merge Sort? Or maybe in some cases it's faster to copy it

void linkedListSort();

void linkedListReverse();