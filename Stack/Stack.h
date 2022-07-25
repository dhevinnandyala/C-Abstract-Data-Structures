//
// Created by Dhevin N on 23/7/22.
//

#ifndef C_ADTS_STACK_H
#define C_ADTS_STACK_H

#include "../LinkedList/LinkedList.c"

//extends LinkedList

int stackPeek(LinkedList *this);

int stackPop(LinkedList *this);

int stackPush(LinkedList *this, int data);

//isEmpty (use LinkedList isEmpty)

//getSize (Use LinkedList getSize)

#endif //C_ADTS_STACK_H