#include <stdio.h>

int main ()
{
    int
        x1, y1,
        x2, y2,
        x3, y3;

    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if (x1 > x3) {x1 = x1+x3; x3=x1-x3; x1=x1-x3;}
    if (y1 > y3) {y1 = y1+y3; y3=y1-y3; y1=y1-y3;}
    
    if (x2-x1 < x3-x1 && y2-y1 < y3-y1)
        puts("contenido");
    else
        puts("no contenido");

    return 0;
}