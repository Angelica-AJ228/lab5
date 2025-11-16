#include <stdio.h>
#include "arreglo.h"

int main() {

	Arreglo *arr = crearArreglo(2);

	printf("Leyendo elementos...\n");
	printf("Agregando...\n");

	agregarElemento(arr, 10);
	agregarElemento(arr, 34);
	agregarElemento(arr, 56);
	imprimirArreglo(arr);


	printf("Buscando elemento en indice 3:\n");
	int valor = obtenerElemenento(arr, 3);
	printf("Numero: %d\n", valor);

}
