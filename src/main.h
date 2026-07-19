#ifndef MAIN_H
#define MAIN_H

typedef struct node{
    Operand *prev;
    int data;
    Operand *next;
} Operand;

typedef struct node{
    int data;
    Result *next;
} Result;

#endif