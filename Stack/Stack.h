//
// Created by Dhevin N on 23/7/22.
//

#ifndef C_ADTS_STACK_H
#define C_ADTS_STACK_H

#include "../LinkedList/LinkedList.c"

int peek(LinkedList *this);

int pop(LinkedList *this);

int push(LinkedList *this, int data);

struct Node* getTopNode(LinkedList *this);

//isEmpty




#endif //C_ADTS_STACK_H
