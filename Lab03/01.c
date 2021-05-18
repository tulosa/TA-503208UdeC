#include <stdio.h>

int main ()
{
	char c;

	scanf("%c", &c);

	if (c >= '0' && c <= '9') {
		printf("Numero\n");
	}
	else if (c >= 'A' && c <= 'Z') {
		printf("Letra mayuscula\n");
	}
	else if (c >= 'a' && c <= 'z') {
		printf("Letra minuscula\n");
	}
	else {
		printf("Otro\n");
	}

	return 0;
}

