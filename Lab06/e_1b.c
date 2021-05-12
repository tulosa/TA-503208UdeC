/*
 * Código para Ej.1.b
 * Ordenar en espiral
 * 
 * Nota: es un código muy bruto, ad hoc al problema, falta refinar
 * Igual sirve para otras dimensiones, ajustando los valores correspondientes.
 * */

#include <stdio.h>

int main ()
{
	int
		inMatrix[5][5],
		outMatrix[5][5];
		
	int sortarr[25];
	
	for (int j = 0; j < 5; ++j) {
		for (int i = 0; i < 5; ++i) {
			scanf("%d", &inMatrix[j][i]);
		}
	}
	
	/* Copiamos los elementos de la matriz de entrada a un arreglo para aplicar sort */

	for (int j = 0; j < 5; ++j) {
		for (int i = 0; i < 5; ++i) {
			sortarr[j*5 + i] = inMatrix[j][i];
		}
	}
	
	// Selection Sort
	for (int j = 0; j < 25; ++j) {
		for (int i = j+1; i < 25; ++i) {
			if (sortarr[i] < sortarr[j]) {
				sortarr[i] = sortarr[i] + sortarr[j];
				sortarr[j] = sortarr[i] - sortarr[j];
				sortarr[i] = sortarr[i] - sortarr[j];
			}
		}
	}

	// Inicializar 
	for (int j = 0; j < 5; ++j) {
		for (int i = 0; i < 5; ++i) {
			outMatrix[i][j] = 0;
		}	
	}
	
	/*
	 * Parte de la espiral
	 * 
	 * Recorremos la espiral como cuadrados concéntricos, desde afuera hacia adentro.
	 * ¿cuantos cuadrados concéntricos tiene una matriz?
	 * 
	 * A su vez, cada cuadrado concéntrico se divide en cuatro partes (Superior, Derecha, Inferior, Izquierda)
	 * ¿Por que cuatro?
	 * Separamos la lógica de la Derecha e Izquierda, Arriba y Abajo, porque van en sentido contrario.
	 * */
	int apos = 0;
	for (int n = 0; n < (5+1)/2 ; n++) {
		
		// nota como dejamos los índices afuera de los for, esto servirá después
		int i = n;
		int j = n;
		
		// arriba, ➡
		while (i < 5-n && apos < 25) {
			outMatrix[j][i] = sortarr[apos];
			apos++;
			i++;
		}
	
		// derecha, ⬇
		i--;
		j++;
		while (j < 5-n-1 && apos < 25) {
			outMatrix[j][i] = sortarr[apos];
			apos++;
			j++;
		}

		// abajo, ⬅			
		while (i >= n && apos < 25) {
			outMatrix[j][i] = sortarr[apos];
			apos++;
			i--;
		}
		

		// izquierda, ⬆
		i++;
		j--;
		while (j > n && apos < 25) {
			outMatrix[j][i] = sortarr[apos];
			apos++;
			j--;
		}
		
		if (apos == 25) {
			break;
		}
		
	}
		
	
	for (int j = 0; j < 5; ++j) {
		for (int i = 0; i < 5; ++i) {
			printf("%6d ", outMatrix[j][i]);
		}
		printf("\n");
	}
		
	return 0;
}
