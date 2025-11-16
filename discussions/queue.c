#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct SLNode {
    int number;
    struct SLNode* next;
} SLNode;

typedef struct Queue {
    SLNode *front;
    SLNode *rear;
    size_t len;
} Queue;

void initQueue(Queue* queue) {
    // queue->front = malloc(sizeof(int) * queue->len);
    queue->front = NULL;
    queue->rear = NULL;
    queue->len = 0;
}

void enqueue(Queue* queue, int number) {
    // for (int i=0; i<queue->len; i++) {
    //     *(queue->front - i - 1) = *(queue->front - i);
    //     queue->front = number;
    // }
    SLNode* node = malloc(sizeof(SLNode));
    node->number = number;
    node->next = NULL;
    if (queue->rear) {
        queue->rear->next = node;
    } else {
        queue->front = node;
    }

    queue->rear = node;
    queue->len++;
}

int dequeue(Queue* queue) {
    // for (int i=0; i<queue->len; i++) {
    //     int *temp = *queue->rear;
    //     *(queue->rear + i + 1) = *(queue->front + i);
    //     queue->front = number;
    // }
    assert(queue->front);

    int number = queue->front->number;
    SLNode* nodetofree = queue->front;

    queue->front = queue->front->next;
    if(!queue->front) {
        queue->rear = NULL;
    }
    free(nodetofree);
    queue->len--;
    return number;
}

void freeQueue(Queue* queue){
    while(queue->front) {
        dequeue(queue);
    }
}

int main() {
    Queue queue;
    initQueue(&queue);
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    printf("Dequeue: %d\n", dequeue(&queue));
    freeQueue(&queue);
    return 0;
}