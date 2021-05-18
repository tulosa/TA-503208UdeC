#include <stdio.h>

int main ()
{
    int n;
    int fact;

    scanf("%d", &n);

    for (fact = 1; n; --n) {
        fact *= n;
    }

    printf("%d\n", fact);

    return 0;
}