#ifndef DATA_H
#define DATA_H

typedef struct dll_node{
    struct node *prev;
    int data;
    struct node *next;
} Operand;

typedef struct sll_node{
    int data;
    struct node *next;
} Result;

typedef enum{
    SUCCESS,
    FAILURE
} Status;

#endif