/* Implementing a singly linked list */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

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

void pushBackList(IntList *list, int number) { //inserts a number to the end of the list
  ILNode *node = malloc(sizeof(ILNode));  //create a new node
  node->number = number;    //assign the value
  node->next = NULL;        //set the next pointer to NULL as we are adding the node to the tail
  if(list->head){           //if the list is not empty, insert after the current tail node and update the tail
    list->tail->next = node;
    list->tail = node;
  } else{           // if the list is empty, then the node is the head as well as the tail
    list->head = node;
    list->tail = node;
  }
  list->len++;
}

int popBackList(IntList *list) {    //pop the value at the end of the list
  assert(list->tail);               //ensure there is an element to pop
  int number = list->tail->number;    //extract the number to be returned
  ILNode *cur = list->head;
  ILNode *prev = NULL;
  while(cur && cur->next){          //traverse to the end of the list
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

void pushFrontList(IntList *list, int number) {   //insert a value at the start of the list
  ILNode *node = malloc(sizeof(ILNode));    //create a new node
  node->number = number;
  node->next = list->head;
  list->head = node;
  if(list->tail == NULL){   //if tail is NULL, this implies you have added a node to an empty list
    list->tail = list->head;
  }
  list->len++;
}

int popFrontList(IntList* list) {     // remove a value from the front of the list
  assert(list->head);
  int number = list->head->number;    //store the number to be returned
  ILNode *nodeToFree = list->head;
  list->head = list->head->next;
  if(list->head == NULL){
    list->tail = NULL;
  }
  free(nodeToFree);
  list->len--;
  return number;
}

void printList(IntList *list) {     //print the list starting from the head
   printf("(");
   ILNode *node = list->head;
   while (node) {
      printf("%d ", node->number);
      node = node->next;
   }
   printf(")\n");
}
