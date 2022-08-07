//
// Created by Dhevin N on 25/7/22.
//

#ifndef C_ADTS_QUEUE_H
#define C_ADTS_QUEUE_H
#include "../LinkedList/LinkedList.c"

void initQueue(LinkedList *this, int data);

int queuePeek(LinkedList *this);

int queueDequeue(LinkedList *this);

int queueEnqueue(LinkedList *this);

#endif //C_ADTS_QUEUE_H
