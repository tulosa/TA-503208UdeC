#include <stdio.h>

int main ()
{
    for (char i = '0'; i <= '9'; ++i) {
        printf("%x: %3d: %c\n", i, i, i);
    }
    printf("----------\n");
    for (char i = 'A'; i <= 'Z'; ++i) {
        printf("%x: %3d: %c\n", i, i, i);
    }
    printf("----------\n");
    for (char i = 'a'; i <= 'z'; ++i) {
        printf("%x: %3d: %c\n", i, i, i);
    }

    return 0;
}