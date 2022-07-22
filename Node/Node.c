#include "Node.h"

struct node {
    int *data;
    struct node *left;
    struct node *right;
    bool hasLeft;
    bool hasRight;
    bool hasData;
};

void initNode(struct node *this, int data) {
    this->data = calloc(1, sizeof(int));
    *this->data = data;
    this->left = NULL;
    this->right = NULL;
    this->hasLeft = false;
    this->hasRight = false;
    this->hasData = false;
}

/* Set Function */

void setData(struct node *this, int data) {
    *this->data = data;
    this->hasData = true;
}

void setLeft(struct node *this, struct node *left) {
    this->left = calloc(1, sizeof(struct node *));
    this->left = left;
    this->hasLeft = true;
}

void setRight(struct node *this, struct node *right) {
    this->right = right;
    this->hasRight = true;
}

/* Boolean functions */

bool hasLeft(struct node *this) {
    return this->hasLeft;
}

bool hasRight(struct node *this) {
    return this->hasRight;
}

bool hasData(struct node *this) {
    return this->hasData;
}

/* Get Functions */

int getData(struct node *this) {
    if (hasData(this)) {
        return *this->data;
    }
    return INT32_MIN;
}

struct node *getLeft(struct node *this) {
    if (hasLeft(this)) {
        return this->left;
    }
    return 0;
}

struct node *getRight(struct node *this) {
    if (hasRight(this)) {
        return this->right;
    }
    return 0;
}