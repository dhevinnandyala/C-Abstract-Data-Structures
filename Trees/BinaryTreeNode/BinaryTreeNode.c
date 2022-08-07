//
// Created by Dhevin N on 7/8/22.
//

struct BinaryTreeNode {
    struct BinaryTreeNode* parent;
    struct BinaryTreeNode* leftChild;
    struct BinaryTreeNode* rightChild;
    int data;
};

struct BinaryTreeNode* getParent(struct BinaryTreeNode* this){
    return this->parent;
}

struct BinaryTreeNode* getLeftChild(struct BinaryTreeNode* this) {
    return this->leftChild;
}

struct BinaryTreeNode* getRightChild(struct BinaryTreeNode* this) {
    return this->rightChild;
}

void setParent(struct BinaryTreeNode* this, struct BinaryTreeNode* parent) {
    this->parent = parent;
}

void setLeft(struct BinaryTreeNode*this, struct BinaryTreeNode* left) {
    this->leftChild = left;
}

void setRight(struct BinaryTreeNode* this, struct BinaryTreeNode* right) {
    this->rightChild = right;
}

int getData(struct BinaryTreeNode* this) {
    return this->data;
}

void setData(struct BinaryTreeNode* this, int data) {
    this->data = data;
}