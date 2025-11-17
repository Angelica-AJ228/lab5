#include <stdio.h>
#include "../include/arreglo.h"

int main() {

	Arreglo *arr = crearArreglo(2);

	printf("Leyendo elementos...\n");
	printf("Agregando...\n");

	agregarElemento(arr, 10);
	agregarElemento(arr, 34);
	agregarElemento(arr, 56);
	imprimirArreglo(arr);


	printf("Buscando elemento en indice 2:\n");
	int valor = obtenerElemento(arr, 2);
	printf("Numero: %d\n", valor);
	

	printf("Eliminando elemento en indice 0...\n");
	eliminarElemento(arr, 0);
	imprimirArreglo(arr);

	liberarArreglo(arr);

	return 0;
}
