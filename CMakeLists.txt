cmake_minimum_required(VERSION 3.22)
project(C_ADTs C)

set(CMAKE_C_STANDARD 23)

add_library(C_ADTs ADT_Library.c "Linked Lists/Node/Node.c" "Linked Lists/Node/Node.h" "Linked Lists/LinkedList/LinkedList.c" "Linked Lists/LinkedList/LinkedList.h" "Linked Lists/Stack/Stack.c" "Linked Lists/Stack/Stack.h" "Linked Lists/Queue/Queue.c" "Linked Lists/Queue/Queue.h" "Linked Lists/PriorityQueue/PriorityQueue.c" "Linked Lists/PriorityQueue/PriorityQueue.h" List/List.c List/List.h HashMap/HashMap.c HashMap/HashMap.h Trees/BinaryTree/BinaryTree.c Trees/BinaryTree/BinaryTree.h Trees/BinaryTreeNode/BinaryTreeNode.c Trees/BinaryTreeNode/BinaryTreeNode.h)
