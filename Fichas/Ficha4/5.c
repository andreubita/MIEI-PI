#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct stack{
    int sp;
    int valores[MAX];
} STACK;

void initStack(STACK *s){
    s->sp = 0;
}

int isEmptyS(STACK *s){
    return s->sp == 0;
}

int push(STACK *s, int x){
    if(s->sp + 1 == MAX) return 1;
    s->valores[s->sp+1] = x;
    s->sp++;
    return 0;
}

int pop(STACK *s, int *x){
    if(isEmptyS(s)) return 1;
    *x = s->valores[s->sp];
    s->valores[s->sp] = NULL;
    s->sp--;
    return 0;
}

int top(STACK *s, int *x){
    if(isEmptyS(s)) return 1;
    *x = s->valores[s->sp];
    return 0;
}