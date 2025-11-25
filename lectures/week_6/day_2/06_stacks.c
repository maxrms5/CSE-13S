/* Implementing a stack using a singly linked list */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct SLNode {
    int number;
    struct SLNode *next;
} SLNode;

typedef struct Stack {
    SLNode *top;
    size_t len;
} Stack;

void initStack(Stack *stack) {      //initializes a stack structure
    stack->top = NULL;
    stack->len = 0;
}

void push(Stack* stack, int number) {
    SLNode* node = malloc(sizeof(SLNode));          //create a new node and store it in the heap part of memory
    node->number = number;  
    node->next = stack->top;
    stack->top = node;
    stack->len++;
}

int pop(Stack* stack) {
    assert(stack->top);
    int number = stack->top->number;
    SLNode* nodeToFree = stack->top;
    stack->top = stack->top->next;
    free(nodeToFree);
    stack->len--;
    return number;
}

void freeStack(Stack* stack) {
    while (stack->top) {
        pop(stack);
    }
}

int main() {
    Stack stack;            //fixed size structure stored in stack frame for main
    initStack(&stack);
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    printf("Pop: %d\n", pop(&stack));
    freeStack(&stack);
    
    return 0;
}
