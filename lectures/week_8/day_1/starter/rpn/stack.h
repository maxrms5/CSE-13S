#ifndef _ISTACK__H
#define _ISTACK__H

typedef struct IStack {
   int mx;
   int sz;
   int* t;
} IStack;

IStack* makeStack();
void freeStack(IStack* s);
void pushStack(IStack* s,int v);
int popStack(IStack* s);
int isEmptyStack(IStack* s);


#endif
