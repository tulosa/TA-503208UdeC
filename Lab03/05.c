#include <stdio.h>

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);

    ++m;
    while (--m >= n) {
        printf("%d ", m);
    }
    printf("\n");

    return 0;
}