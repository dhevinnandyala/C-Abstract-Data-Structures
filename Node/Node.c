#include "Node.h"

struct Node {
    int *data;
    struct Node *left;
    struct Node *right;
    bool hasLeft;
    bool hasRight;
    bool hasData;
};

void initNode(struct Node *this, int data) {
    this->data = calloc(1, sizeof(int));
    *this->data = data;
    this->left = calloc(1, sizeof (struct Node));
    this->left = 0;
    this->right = calloc(1, sizeof (struct Node));
    this->right = 0;
    this->hasLeft = false;
    this->hasRight = false;
    this->hasData = false;
}

/* Set Function */

void setData(struct Node *this, int data) {
    *this->data = data;
    this->hasData = true;
}

void setLeft(struct Node *this, struct Node *left) {
    this->left = calloc(1, sizeof(struct Node *));
    this->left = left;
    this->hasLeft = true;
}

void setRight(struct Node *this, struct Node *right) {
    this->right = right;
    this->hasRight = true;
}

/* Boolean functions */

bool hasLeft(struct Node *this) {
    return this->hasLeft;
}

bool hasRight(struct Node *this) {
    return this->hasRight;
}

bool hasData(struct Node *this) {
    return this->hasData;
}

/* Get Functions */

int getData(struct Node *this) {
    if (hasData(this)) {
        return *this->data;
    }
    return INT32_MIN;
}

struct Node *getLeft(struct Node *this) {
    if (hasLeft(this)) {
        return this->left;
    }
    return 0;
}

struct Node *getRight(struct Node *this) {
    if (hasRight(this)) {
        return this->right;
    }
    return 0;
}