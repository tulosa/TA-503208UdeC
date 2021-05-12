#include <stdio.h>

int main ()
{
    int min;
    int n, k;
    int aux;
    scanf("%d %d", &n, &k);

    if (n <= k) {
        min = 2;
    }
    else {
        min = 2*((n-k)/k);
        if (n%k == 0) {
            min += 2;
        }
        else if (n%k <= k/2) {
            min += 3;
        }
        else {
            min += 4;
        }
    }

    printf("%d\n", min);
}