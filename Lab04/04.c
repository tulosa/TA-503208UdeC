#include <stdio.h>

int main ()
{
    int xd[8];

    for (int i = 7; i >= 0; --i) {
        int n;
        scanf("%d", &n);
        xd[i] = n;
    }

    return 0;
}