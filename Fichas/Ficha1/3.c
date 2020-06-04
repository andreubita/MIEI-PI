#include <stdio.h>

void desenha_quadrado(int n);
void desenha_tabuleiro(int n);
void triangulo_vertical(int n);
void triangulo_horizontal(int n);

void desenha_quadrado(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            putchar('#');
        putchar('\n');
    }
}

void desenha_tabuleiro(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((j+i) % 2 == 0) putchar('#');
            else putchar('_');
        }
        putchar('\n');
    }
}

void triangulo_vertical(int n){
    for(int i = 0; i < (n*2-1); i++){
        for(int j = 0; j < n; j++){
            if(i < n){
                if(j <= i) putchar('#');
            }else{
                if(j > (i-n)) putchar('#');
            }
        }
        putchar('\n');
    }
}

void triangulo_horizontal(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n*2-1); j++){
                                          
        }
    }
}