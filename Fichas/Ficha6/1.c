#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct queue{
    int inicio, tamanho;
    int valores[MAX];
} QUEUE;

void printQueue(QUEUE *q) {
    printf("[");
    for(int i = 0; i < q->tamanho; i++) printf("%d%s",q->valores[q->inicio + i],i == q->tamanho - 1 ? "" : ", ");
    printf("] %d - start index\n",q->inicio);
}
void initQueue(QUEUE *q){
    q->tamanho == 0;
}

int isEmptyQ(QUEUE *q){
    return q->tamanho == 0;
}

int enqueue(QUEUE *q, int x){
    if((q->inicio + q->tamanho) == MAX) return 1;
    q->valores[q->inicio + q->tamanho] = x;
    q->tamanho++;
    return 0;
}

int dequeue(QUEUE *q, int *x){
    if(q->tamanho == 0) return 1;
    *x = q->valores[q->inicio];
    q->valores[q->inicio] = NULL;
    (q->inicio)++;
    (q->tamanho)--;
    return 0;
}

int front(QUEUE *q, int *x){
    if(q->tamanho == 0) return 1;
    *x = q->valores[q->inicio];
    return 0;
}

// BONUS
int rear(QUEUE *q, int *x){
    if(q->tamanho == 0) return 1;
    *x = q->valores[q->inicio+q->tamanho-1];
    return 0;
}