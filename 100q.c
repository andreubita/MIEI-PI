#include <stdio.h>
#include <stdlib.h>

int main(){
    tres();
    return 0;
}

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