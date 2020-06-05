#include <stdio.h>
#include <stdlib.h>

void um(){
    int current = -1;
    int bigger = 0;
    while(current != 0){
        scanf("%d", &current);
        if(current > bigger) bigger = current;
    }
    printf("O maior numero foi %d\n", bigger);
}

void dois(){
    int current = -1;
    int sum = 0, i = 0;
    while(current != 0){
        scanf("%d", &current);
        sum += current;
        i++;
    }
    printf("A media de numeros foi de %f\n", (float) sum/(i-1));
}

void tres(){
    int current = -1;
    int a = 0, b = 0;
    while(current != 0){
        scanf("%d", &current);
        if(a < current){
            b = a;
            a = current;
        }else if(b < current && current < a){
            b = current;
        }
    }
    printf("O segundo maior numero foi %d\n", b);
}

// Cinquenta
typedef struct posicao {
    int x, y;
} Posicao;

int vizinhos(Posicao p, Posicao pos[], int N){
    int adj = 0;
    for(int i = 0; i < N; i++){
        Posicao a = pos[N];
        if(-1 <= (p.x - a.x) && (p.x - a.x) <= 1
        && -1 <= (p.y - a.y) && (p.y - a.y) <= 1)
            adj++;
    }
    return adj;
}



typedef struct lligada{
    int valor;
    struct lligada *prox;
} *LInt;

LInt newLInt(int v, LInt t){
    LInt new = (LInt) malloc(sizeof(struct lligada));

    if(new != NULL){
        new->valor = v;
        new->prox = t;
    }
    return new;
}

// Cinquenta e um
int length(LInt l){
    int a = 0;
    while(l != NULL){
        a++;
        l = l->prox;
    }
    return a;
}

// Cinquenta e dois
void freeL(LInt l){
    while(l){
        LInt temp = l;
        l = l->prox;
        free(temp);
    }
}

// Cinquenta e tres
void imprimeL(LInt l){
    while(l != NULL){
        printf("%d\n", l->valor);
        l = l->prox;
    }
}

// Cinquenta e quatro
LInt reverseL(LInt l){
    int len = length(l);
    LInt temp[len];
    for(int i = 0; i < len; i++){
        temp[i] = l->valor;
        l = l->prox;
    }
    for(int i = len - 1; i = 0; i--){
        
    }
}