#include <stdio.h>

int main ()
{
    int a, sum = 0;
    scanf("%d", &a); sum += a%2?1:0;
    scanf("%d", &a); sum += a%2?1:0;
    scanf("%d", &a); sum += a%2?1:0;

    if (!sum || !(sum-3)) puts("uniforme");
    else puts("variadito");
}