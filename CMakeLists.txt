cmake_minimum_required(VERSION 3.22)
project(C_ADTs C)

set(CMAKE_C_STANDARD 23)

add_library(C_ADTs ADT_Library.c Node/Node.c Node/Node.h LinkedList/LinkedList.c LinkedList/LinkedList.h Stack/Stack.c Stack/Stack.h Queue/Queue.c Queue/Queue.h PriorityQueue/PriorityQueue.c PriorityQueue/PriorityQueue.h List/List.c List/List.h HashMap/HashMap.c HashMap/HashMap.h)
