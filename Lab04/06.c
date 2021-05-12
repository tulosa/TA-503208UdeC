#include <stdio.h>

int main ()
{
	int a[10] = {1};        // 0! = 1
	printf("%d\n", a[0]);

	for (int i = 1; i < 10; ++i) {
		a[i] = a[i-1]*i;

		printf("%d\n", a[i]);
	}

	return 0;
}