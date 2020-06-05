#include <stdio.h>
#include <stdlib.h>

// PRIMEIRA PARTE

// 1
void um(){
    int current = -1;
    int bigger = 0;
    while(current != 0){
        scanf("%d", &current);
        if(current > bigger) bigger = current;
    }
    printf("O maior numero foi %d\n", bigger);
}

// 2
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

// 3
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

// 50
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

// SEGUNDA PARTE

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

// 1
int length(LInt l){
    int a = 0;
    while(l != NULL){
        a++;
        l = l->prox;
    }
    return a;
}

// 2
void freeL(LInt l){
    while(l){
        LInt temp = l;
        l = l->prox;
        free(temp);
    }
}

// 3
void imprimeL(LInt l){
    while(l != NULL){
        printf("%d\n", l->valor);
        l = l->prox;
    }
}

// 4
LInt reverseL(LInt l) {
    int len = length(l);
    LInt rev[len];
    for(int i = 0; i < len; l = l->prox) rev[i++] = l;
    for(int i = len - 1; i > 0; i--) rev[i]->prox = rev[i-1];
    rev[0]->prox = NULL;
    return rev[len - 1];
}

typedef struct nodo{
    int valor;
    struct node *esq, *dir;
} *ABin;

// 28
int altura(ABin arv){
    if(arv == NULL) return 0;
    return 1 + (altura(arv->esq) > altura(arv->dir) ? altura(arv->esq) : altura(arv->dir));
}

// 29
ABin cloneAB(ABin arv){
    if(arv == NULL) return NULL;
    ABin new = malloc(sizeof(struct nodo));
    new->valor = arv->valor;
    new->esq = cloneAB(new->esq);
    new->dir = cloneAB(new->dir);
    return new;
}

// 30
void mirror(ABin *arv){
    if((*arv)){
        ABin temp = (*arv)->esq;
        (*arv)->esq = (*arv)->dir;
        (*arv)->dir = temp;
        mirror(&(*arv)->esq);
        mirror(&(*arv)->dir);
    }
}

// 31
