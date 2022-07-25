//
// Created by Dhevin N on 25/7/22.
//

#include "stdlib.h"
#include "stdbool.h"

typedef struct pqNode {
    int priority;
    int value;

    struct pqNode *next;
};

typedef struct {
    struct pqNode* top;
    int size;
} PriorityQueue;

void initPriorityQueue(PriorityQueue *this, int data, int priority) {
    struct pqNode new;
    new.next = NULL;
    new.value = data;
    new.priority = priority;

    this->top = &new;
    this-> size = 1;
}

int PriorityQueuePeek(PriorityQueue *this) {
    return this->top->value;
}

int PriorityQueueDequeue(PriorityQueue *this) {
    int data = this->top->value;
    this->top = this->top->next;
    return data;
}

int PriorityQueueEnqueue(PriorityQueue *this, int data, int priority) {
    //
}

#include "PriorityQueue.h"
