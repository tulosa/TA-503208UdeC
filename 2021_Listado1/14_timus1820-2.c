/* MALO */
#include <stdio.h>

int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);

    printf("%d\n", n<=k?2:((2*(n-k)/k)+(n%k?(n%k<=k/2?3:4):2)));
}