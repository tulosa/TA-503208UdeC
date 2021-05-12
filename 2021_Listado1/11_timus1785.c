// 233723CU
#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    if (n >= 1000)
        puts("legion");
    else if (n >= 500)
        puts("zounds");
    else if (n >= 250)
        puts("swarm");
    else if (n >= 100)
        puts("throng");
    else if (n >= 50)
        puts("horde");
    else if (n >= 20)
        puts("lots");
    else if (n >= 10)
        puts("pack");
    else if (n >= 5)
        puts("several");
    else if (n >= 1)
        puts("few");

    return 0;
}