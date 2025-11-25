#ifndef __LIST_H
#define __LIST_H

typedef struct ILNode { 
  int number;
  struct ILNode* next;
} ILNode;

typedef struct IntList {  
  ILNode* head;
  ILNode* tail;
  int len;
} IntList;

void initList(IntList* list);
void freeList(IntList* list);
void pushBackList(IntList *list, int number);
int popBackList(IntList *list);
void pushFrontList(IntList *list, int number);
int popFrontList(IntList* list);
void printList(IntList *list);

#endif