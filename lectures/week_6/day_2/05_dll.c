/* Implementing a doubly linked list */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct DLNode {
    int number;
    struct DLNode* next;
    struct DLNode* prev;
} DLNode;

typedef struct DoublyLinkedList {
    DLNode* head;
    DLNode* tail;
    size_t len;
} DoublyLinkedList;

void initList(DoublyLinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
    list->len = 0;
}

void freeList(DoublyLinkedList* list) {
    DLNode* cur = list->head;
    while (cur) {
        DLNode* next = cur->next;
        free(cur);
        cur = next;
    }

    /* 
    DLNode* cur = list->tail;
     while (cur) {
        DLNode* prev = cur->prev;
        free(cur);
        cur = prev;
    }
    */
}

void pushBackList(DoublyLinkedList* list, int number) {
    DLNode* node = malloc(sizeof(DLNode));
    node->number = number;
    node->next = NULL;
    node->prev = list->tail;
    if (list->tail) {
        list->tail->next = node;
    } else {
        list->head = node;
    }
    list->tail = node;
    list->len++;
}

int popBackList(DoublyLinkedList* list) {
    assert(list->tail);
    int number = list->tail->number;
    DLNode* nodeToFree = list->tail;
    list->tail = list->tail->prev;
    if (list->tail) {
        list->tail->next = NULL;
    } else {
        list->head = NULL;
    }
    free(nodeToFree);
    list->len--;
    return number;
}

void pushFrontList(DoublyLinkedList* list, int number) {
    DLNode* node = malloc(sizeof(DLNode));
    node->number = number;
    node->prev = NULL;
    node->next = list->head;
    if (list->head) {
        list->head->prev = node;
    } else {
        list->tail = node;
    }
    list->head = node;
    list->len++;
}

int popFrontList(DoublyLinkedList* list) {
    assert(list->head);
    int number = list->head->number;
    DLNode* nodeToFree = list->head;
    list->head = list->head->next;
    if (list->head) {
        list->head->prev = NULL;
    } else {
        list->tail = NULL;
    }
    free(nodeToFree);
    list->len--;
    return number;
}

void printListForward(DoublyLinkedList* list) {
    printf("Forward: (");
    DLNode* node = list->head;
    while (node) {
        printf("%d ", node->number);
        node = node->next;
    }
    printf(")\n");
}

void printListBackward(DoublyLinkedList* list) {
    printf("Backward: (");
    DLNode* node = list->tail;
    while (node) {
        printf("%d ", node->number);
        node = node->prev;
    }
    printf(")\n");
}

int main() {
    DoublyLinkedList* list = malloc(sizeof(DoublyLinkedList));
    initList(list);
    printListForward(list);

    printf("Pushing 1 to back of list: ");
    pushBackList(list, 1);
    printListForward(list);
    printf("Pushing 2 to back of list: ");
    pushBackList(list, 2);
    printListForward(list);
    printf("Pushing 3 to front of list: ");
    pushFrontList(list, 3);
    printListForward(list);
    printf("Pushing 8 to front of list: ");
    pushFrontList(list, 8);
    printListForward(list);
    printf("Pushing 10 to back of list: ");
    pushBackList(list, 10);
    printListForward(list);
    printf("Pushing 4 to back of list: ");
    pushBackList(list, 4);
    printListForward(list);
    
    printListBackward(list);
    
    printf("Pop back %d\n", popBackList(list));
    printListForward(list);
    printf("Pop front %d\n", popFrontList(list));
    printListForward(list);
    
    freeList(list);
    free(list);
    return 0;
}
