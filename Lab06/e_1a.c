/*
 * Código para Ej.1.a
 * Ordenar izquierda a derecha, arriba hacia abajo
 * 
 * Nota: es un código muy bruto, ad hoc al problema, falta refinar
 * Igual sirve para otras dimensiones, ajustando los valores correspondientes.
 * */

#include <stdio.h>

int main ()
{
	int	mat[5][5];
		
	for (int j = 0; j < 5; ++j) {
		for (int i = 0; i < 5; ++i) {
			scanf("%d", &mat[j][i]);
		}
	}
	

	// Selection Sort

	// Este trucazo a veces funciona
	
	for (int j = 0; j < 5*5; j++) {
		for (int i = 0; i < 5*5; i++) {
			if (mat[0][i] > mat[0][j]) {
				mat[0][i] = mat[0][i] + mat[0][j];
				mat[0][j] = mat[0][i] - mat[0][j];
				mat[0][i] = mat[0][i] - mat[0][j];
			}
		}
	}
	
/*
	// Para cuando no funciona el trucaso
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			// en la primera iteración se compara con si mismo, meh, no importa
			for (int y = j; y < 5; y++) {
				for (int x = i; x < 5; x++) {
					// 
					if (mat[j][i] > mat[y][x]) {
						mat[j][i] = mat[j][i] + mat[y][x];
						mat[y][x] = mat[j][i] - mat[y][x];
						mat[j][i] = mat[j][i] - mat[y][x];
					}
				}
			}
		}
	}
*/

	for (int j = 0; j < 5; ++j) {
		for (int i = 0; i < 5; ++i) {
			printf("%6d ", mat[j][i]);
		}
		printf("\n");
	}
		
	return 0;
}
