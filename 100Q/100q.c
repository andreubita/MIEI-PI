#include <stdio.h>
#include "respostas.c"

// WIP
// Sem paciencia para programar C.

int main(){
    LInt a = newLInt(1, newLInt(2, NULL));
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