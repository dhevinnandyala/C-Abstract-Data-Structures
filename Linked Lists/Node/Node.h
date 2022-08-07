//
// Created by Dhevin N on 21/7/22.
//

#ifndef C_ADTS_NODE_H
#define C_ADTS_NODE_H

#include "stdlib.h"
#include "stdbool.h"

struct Node;

void initNode(struct Node *this, int data);

/* Set Function */

void setData(struct Node *this, int data);

void setLeft(struct Node *this, struct Node *left);

void setRight(struct Node *this, struct Node *right);

/* Boolean functions */

bool hasLeft(struct Node *this);

bool hasRight(struct Node *this);

bool hasData(struct Node *this);

/* Get Functions */

int getData(struct Node *this);

struct Node *getLeft(struct Node *this);

struct Node *getRight(struct Node *this);

#endif //C_ADTS_NODE_H
