/* Testing the implementation of a singly linked list */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  IntList *list = malloc(sizeof(IntList));
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