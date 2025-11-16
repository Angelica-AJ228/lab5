#include <stdio.h>
#include <stdlib.h>
#include "arreglo.h>"

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
