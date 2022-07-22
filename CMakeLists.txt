cmake_minimum_required(VERSION 3.22)
project(C_ADTs C)

set(CMAKE_C_STANDARD 23)

add_library(C_ADTs ADT_Library.c Node/Node.c Node/Node.h LinkedList/LinkedList.c LinkedList/LinkedList.h)
