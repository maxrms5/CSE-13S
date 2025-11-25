/* Implementing a stack using a dynamic array */

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int *t;     //array of integers to store items for the stack
    int mxs;    //max capacity of the stack
    int sz;     //number of values currently in the stack
} StackOfInt;

StackOfInt* makeStack(int mxs) {
    StackOfInt* s = (StackOfInt*)malloc(sizeof(StackOfInt));    //allocate memory for stack
    s->mxs = mxs;
    s->sz = 0;
    s->t = (int*)malloc(sizeof(int) * mxs);     //allocate memory to store mxs integers 
    return s;
}

void freeStack(StackOfInt* s) {
    free(s->t);     //free the memory allocated for the integers
    free(s);        //free the space for the stack
}

void pushInt(StackOfInt* s, int v) {
    if(s->sz < s->mxs)
        s->t[s->sz++] = v;  //push an element onto the stack
}

int isStackEmpty(StackOfInt* s) {
    return s->sz == 0;
}

int popInt(StackOfInt* s) {
    return s->t[--s->sz];   //pop an element from the stack
}

int main() {
    StackOfInt* s = makeStack(10);
    for(int i=0; i < 10;i++)        //insert 10 elements in the stack.
        pushInt(s, i);
    while(!isStackEmpty(s)) {
        int v = popInt(s);
        printf("Popped %d\n", v);
    }
    freeStack(s);
    return 0;
}