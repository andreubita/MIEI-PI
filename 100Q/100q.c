#include <stdio.h>
#include "respostas.c"

#define COUNT 10
#define MAXc 3

// WIP
// Sem paciencia para programar C.

typedef struct chunk {
    int vs [MAXc];
    struct chunk *prox;
} *CList;

typedef struct stackC {
    CList valores;
    int sp;
} StackC;

void add_new (ABin tree,int lado,int valor){
  ABin new;
  new = malloc (sizeof (struct nodo));
  new->valor = valor;
  new->esq = NULL;
  new->dir = NULL;
  if (lado) tree->dir = new;
  else tree->esq = new;
}

void print2DUtil(struct ABin *root, int space) 
{ 
    // Base case 
    if (root == NULL) 
        return; 
  
    // Increase distance between levels 
    space += COUNT; 
  
    // Process right child first 
    print2DUtil(root->dir, space); 
  
    // Print current node after space 
    // count 
    printf("\n"); 
    for (int i = COUNT; i < space; i++) 
        printf(" "); 
    printf("%d\n", root->valor); 
  
    // Process left child 
    print2DUtil(root->left, space); 
} 

int main(){
    LInt a = newLInt(1, newLInt(2, NULL));

    ABin tree;
    tree = (ABin) malloc (sizeof (struct nodo)); //TREE
    tree->valor = 20;                           //20
    add_new (tree,0,35);                  //35       22     
    add_new (tree,1,22);               //80    43  25   23
    add_new (tree->esq,0,80);
    add_new (tree->esq,1,43);
    add_new (tree->dir,0,25);

    //imprimeL(a);
    printf("%d\n", length(a));
    /*
    int prg;
    printf("Pergunta: ");
    scanf("%d", &prg);
    switch (prg)
    {
    case 1:
        um();
        break;
    case 2:
        dois();
    case 3:
        tres();
    case 50:
        int x, y;
        scanf("%d %d", &x, &y);
        Posicao pos = {x,y};
        // TODO
        //vizinhos(pos);
    default:
        printf("\nPergunta invalida.");
        break;
    }
    return 0;*/
}