#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    if (!(n%2)) puts("2");
    if (!(n%3)) puts("3");
    if (!(n%4)) puts("4");
    if (!(n%5)) puts("5");
    if (!(n%6)) puts("6");
    if (!(n%7)) puts("7");
    if (!(n%8)) puts("8");
    if (!(n%9)) puts("9");
    if (!(n%10)) puts("10");

    return 0;
}