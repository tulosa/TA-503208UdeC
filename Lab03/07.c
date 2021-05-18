#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("* ");
    }
    printf("\n");

    for (int j = 0; j+2 < n; ++j) {
        printf("* ");
        for (int i = 0; i+2 < n; ++i) {
            printf("  ");
        }
        printf("* ");
        printf("\n");
    }

    for (int i = 0; i < n; ++i) {
        printf("* ");
    }
    printf("\n");
}