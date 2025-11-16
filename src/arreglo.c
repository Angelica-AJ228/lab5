#include <stdio.h>
#include <stdlib.h>
#include "../include/arreglo.h>"

Arreglo *crearArreglo(int capInicial) {
	Arreglo *arr = (Arreglo*)malloc(sizeof(Arreglo));

	arr->info = (int*)malloc(sizeof(int) * capInicial);
	arr->size = 0;
	arr->cap = capInicial;

	return arr;
}

void agregarElemento(Arreglo *arr, int valor) {
	if (arr->size == arr->cap) {
		int nuevaCap = arr->cap * 2;
		arr->info = (int*)realloc(arr->info, sizeof(int) * nuevaCap);
	}

	arr->info[arr->size] = valor;
	arr->size++;
}

void eliminarElemento(Arreglo *arr, int indice) {
	if (indice < 0 || indice > arr-size) {
		printf("Indice invalido/n");
		return;
	}

	for (int i = indice; i < arr->size - 1; i++) {
	       arr->info[i] = arr->info[i + 1];
	}
	
	arr->size--;
}

int obtenerElemento(Arreglo *arr, int indice) {
	if (indice < 0 || indice > arr->size) {
		printf("Indice invalido/n");
		return -1;
	}

	return arr->info[indice];
}

void imprimirArreglo(Arreglo *arr) {
	printf("[ ");
	for (int i = 0; i < arr->size; i++) {
		printf("%d ", arr->info[i]);
	}
	printf("]\n");

}

void liberarArreglo(Arreglo *arr) {
	free(arr->info);
	free(arr);
}
