//
// Created by Dhevin N on 21/7/22.
//

#ifndef C_ADTS_NODE_H
#define C_ADTS_NODE_H

#include "stdlib.h"
#include "stdbool.h"

struct node;

void initNode(struct node *this, int data);

/* Set Function */

void setData(struct node *this, int data);

void setLeft(struct node *this, struct node *left);

void setRight(struct node *this, struct node *right);

/* Boolean functions */

bool hasLeft(struct node *this);

bool hasRight(struct node *this);

bool hasData(struct node *this);

/* Get Functions */

int getData(struct node *this);

struct node *getLeft(struct node *this);

struct node *getRight(struct node *this);

#endif //C_ADTS_NODE_H
