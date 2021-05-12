#include <stdio.h>
#define OP >

int main ()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a OP b) {a = a+b; b = a-b; a = a-b;}
    if (a OP c) {a = a+c; c = a-c; a = a-c;}
    if (a OP d) {a = a+d; d = a-d; a = a-d;}
    if (b OP c) {b = b+c; c = b-c; b = b-c;}
    if (b OP d) {b = b+d; d = b-d; b = b-d;}
    if (c OP d) {c = c+d; d = c-d; c = c-d;}

    printf("%d %d %d %d\n", a, b, c, d);
}