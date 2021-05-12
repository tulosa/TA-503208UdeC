#include <stdio.h>

int main ()
{
    int a, c = 0;
    scanf("%d", &a);
    if (a < 0) ++c;
    scanf("%d", &a);
    if (a < 0) ++c;
    scanf("%d", &a);
    if (a < 0) ++c;

    if (c == 3) puts("todos");
    else if (c == 2) puts("al menos dos");
    else if (c == 1) puts("al menos uno");
    else puts("ninguno");

    return 0;
}