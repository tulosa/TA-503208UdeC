#include <stdio.h>

int main ()
{
    int n;
    int cdiv = 0;

    scanf("%d", &n);

    for (int div = (n+1)/2; div != 0; div--) {
        if (!(n%div)) cdiv++;
    }

    if (cdiv > 2) {
        printf("No primo\n");
    }
    else {
        printf("Primo\n");
    }

    return 0;
}