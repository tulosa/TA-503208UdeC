#include <stdio.h>

int main()
{
    int fibs[32] = {0, 1};

    for (int i = 2; i < 32; i++) {
        fibs[i] = fibs[i-1] + fibs[i-2];
    }

    return 0;
}