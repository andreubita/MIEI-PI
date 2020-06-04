#include <stdio.h>

void a();
void b();
void c();
void d();

// 12 16
void a(){
    int x, y;
    x = 3; y = x + 1;
    x = x * y; y = x + y;
    printf("%d %d\n", x, y);
}

// 0 22000 - O segundo valor varia dependendo do computador
void b(){
    int x, y;
    x = 0;
    printf("%d %d\n", x, y);
}

/*
A 65
B 66 2 50
b 98
*/
void c(){
    char a, b, c;
    a = 'A'; b = ' '; c = '0';
    printf("%c %d\n", a, a);
    a = a + 1; c = c + 2;
    printf("%c %d %c %d\n", a, a, c, c);
    c = a + b;
    printf("%c %d\n", c, c);
}

// 100 200
void d(){
    int x, y;
    x = 200; y = 100;
    x = x + y; y = x - y; x = x - y;
    printf("%d %d\n", x, y);
}