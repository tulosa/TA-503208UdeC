#include <stdio.h>

int main () {
    int n, c = 0;
    scanf("%d", &n);

    while(++c <= n) {
        printf("%d ", c);
    }
    printf("\n");

    return 0;
}