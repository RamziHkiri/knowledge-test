#ifndef LIFO_H
#define LIFO_H
#include<stdio.h>
#include<stdlib.h>
typedef struct Stack_s
{
    int n;
    struct Stack_s *next;
} Stack;

void initializeStack(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int isEmpty(Stack *s);
#endif