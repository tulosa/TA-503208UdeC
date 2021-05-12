#include <stdio.h>

int main ()
{
    int xd[32];

    for (int i = 0; i < 32; i++) {
        scanf("%d", &xd[i]);
    }

    for (int i = 0; i < 32; i++) {
        for (int j = i+1; j < 32; j++) {
            if (xd[i] < xd[j]) {
                xd[i] = xd[i] + xd[j];
                xd[j] = xd[i] - xd[j];
                xd[i] = xd[i] - xd[j];
            }
        }
    }

    return 0;
}
