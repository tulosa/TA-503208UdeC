#include <stdio.h>

int main ()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b) {
		if (c > a)
			printf("c=%d mayor\n", c);
		else
			printf("a=%d mayor\n", a);
	}
	else {
		if (c > b)
			printf("c=%d mayor\n", c);
		else 
			printf("b=%d mayor\n", b);
	}

	return 0;
}

