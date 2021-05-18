#include <stdio.h>

int main ()
{
    int x, y;
    char op;

    scanf("%d %c %d", &x, &op ,&y);

    switch(op) {
        case '+':
            printf("%d\n", x+y);
            break;
        case '-':
            printf("%d\n", x-y);
            break;
        case '*':
            printf("%d\n", x*y);
            break;
        case '/':
            printf("%d\n%d\n", x/y, x%y);
            break;
    }

    return 0;
}