#ifndef ARREGLO_H
#define ARREGLO_H

typedef struct {
	int *info;
	int size;
	int cap;

} Arreglo;

Arreglo *crearArreglo(int capInicial);
void agregarElemento(Arreglo *arr, int valor);
void eliminarElemento(Arreglo *arr, int indice);
int obtenerElemento(Arreglo *arr, int indice);
void imprimirArreglo(Arreglo *arr);
void liberarArreglo(Arreglo *arr);

#endif
