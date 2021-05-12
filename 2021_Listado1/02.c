#include <stdio.h>

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b < a) a = b;
    printf("%d\n", 2*a);
    return 0;
}