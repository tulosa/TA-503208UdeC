#include <stdio.h>

int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a+b < (c*c)/a) puts("Cumple invariante");

    return 0;
}