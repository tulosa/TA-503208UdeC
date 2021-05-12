#include <stdio.h>

int main ()
{
    int x[3], y[3], pp = 0;

    for (int i = 0; i < 3; ++i) {
        pp += x[i]*y[i];
    }

    return 0;
}