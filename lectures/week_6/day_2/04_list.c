/* Implementing a linked list in C */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct ILNode { // a node consists of a value and pointer to the next node
  int number;
  struct ILNode* next;
} ILNode;

typedef struct IntList {  // a list consists of a pointer to the start and a pointer to the end of the list, and length of the list
  ILNode* head;
  ILNode* tail;
  size_t len;
} IntList;

void initList(IntList* list) { //initializes the list by setting head and tail to NULL and length to 0
  list->head = NULL;
  list->tail = NULL;
  list->len = 0;  
}

void freeList(IntList* list) { //frees the list by freeing memory for every single node
  ILNode* cur = list->head;
  while(cur){
    ILNode* n = cur->next;
    free(cur);
    cur = n;
  }
}

void pushBackList(IntList* list, int number) { //inserts a number to the end of the list
  ILNode* node = malloc(sizeof(ILNode));
  node->number = number;
  node->next = NULL;
  if(list->head){ //if the list is not empty, insert after the current tail node and update the tail
    list->tail->next = node;
    list->tail = node;
  } else{           // if the list is empty, then the node is the head as well as the tail
    list->head = node;
    list->tail = node;
  }
  list->len++;
}

int popBackList(IntList* list) {    //pop the value at the end of the list
  assert(list->head && list->len > 0); //ensure there is an element to pop
  int number = list->tail->number;
  ILNode* cur = list->head;
  ILNode* prev = NULL;
  while(cur && cur->next){ //traverse to the end of the list
    prev = cur;
    cur = cur->next;
  }
  free(cur);            // free the last node
  list->tail = prev;    //set the prev node as the new tail
  if(list->tail){       //if a tail exists, set its next to null
    list->tail->next = NULL;
  }else{                // the list has no more items
    list->head = NULL;
  }
  list->len--;          // decrement the length
  return number;
}

void pushFrontList(IntList* list, int number) {   //insert a value at the start of the list
  ILNode* node = malloc(sizeof(ILNode));
  node->number = number;
  node->next = list->head;
  list->head = node;
  if(list->tail == NULL){
    list->tail = list->head;
  }
  list->len++;
}

int popFrontList(IntList* list) {     // remove a value from the front of the list
  assert(list->head && list->len > 0);
  int number = list->head->number;
  ILNode* nodeToFree = list->head;
  list->head = list->head->next;
  if(list->head == NULL){
    list->tail = NULL;
  }
  free(nodeToFree);
  list->len--;
  return number;
}

void printList(IntList* list) {     //print the list starting from the front
   printf("(");
   ILNode* node = list->head;
   while (node) {
      printf("%d ", node->number);
      if(node->next == NULL){
	    assert(list->tail == node);
      }
      node = node->next;
   }
   printf(")\n");
}

int main(){
  IntList* list = malloc(sizeof(IntList));
  initList(list);
  printList(list);
  printf("Pushing 1 to back of list: ");
  pushBackList(list, 1);
  printList(list);
  printf("Pushing 2 to back of list: ");
  pushBackList(list, 2);
  printList(list);
  printf("Pushing 3 to front of list: ");
  pushFrontList(list, 3);
  printList(list);
  printf("Pushing 8 to front of list: ");
  pushFrontList(list, 8);
  printList(list);
  printf("Pushing 10 to back of list: ");
  pushBackList(list, 10);
  printList(list);
  printf("Pushing 4 to back of list: ");
  pushBackList(list, 4);
  printList(list);
  int num = popBackList(list);
  printf("Pop back %d: ", num);
  printList(list);
  num = popBackList(list);
  printf("Pop back %d: ", num);
  printList(list);
  num = popFrontList(list);
  printf("Pop front %d: ", num);
  printList(list);
  num = popFrontList(list);
  printf("Pop front %d: ", num);
  printList(list);
  freeList(list);
  free(list);

  return 0;
}

