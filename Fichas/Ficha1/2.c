#include <stdio.h>

void a();
void b();
void c();
void d();
void e();
void e_sub(int n);

// 11 66
void a(){
    int x, y;
    x = y = 0;
    while(x != 11){
        x = x + 1; y += x;
    }
    printf("%d %d\n", x, y);
}

// Loop Infinito
void b(){
    int x, y;
    x = y = 0;
    while (x != 11){
        x = x + 2; y += x;
    }
    printf("%d %d\n", x, y);
}

// _#_#_#_#_#_#_#_#_#_#
void c(){
    int i;
    for(i = 0; i < 20; i++)
        if(i % 2 == 0) putchar('_');
        else putchar('#');
}

/*
abcdefg
bcdefg
cdefg
defg
efg
fg
g
*/
void d(){
    char i, j;
    for(i = 'a'; i != 'h'; i++){
        for(j = i; j != 'h'; j++)
            putchar(j);
        putchar('\n');
    }
}

/*
1
01
11
001
101
011
111
0001
1001
0101
1101
0011
1011
0111
1111
*/
void e(){
    int i;
    for(i = 0; i < 16; i++){
        e_sub(i);
    }
}

void e_sub(int n){
    while (n > 0){
        if(n % 2 == 0) putchar('0');
        else putchar('1');
        n = n / 2;
    }
    putchar('\n');
}