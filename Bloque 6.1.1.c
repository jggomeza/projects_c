// Bloque 6.1.1: Estructuras.

#include<stdio.h>
#include<string.h>

typedef struct{
	int paginas;
	char nombre[50];
	float precio;	
}libro;

int main(){
	
	libro JT, CR;
	
	JT.paginas = 50;
	strcpy(JT.nombre, "Juego de Tronos");
	JT.precio = 25.5;
	
	CR.paginas = 150;
	strcpy(CR.nombre, "Choque de Reyes");
	CR.precio = 30;
	
	printf("El libro Juego de Tronos tiene %i paginas.\n", JT.paginas);
	printf("El nombre del libro es %s.\n", JT.nombre);
	printf("El precio del libro Juego de Tronos es %f.\n\n", JT.precio);
	
	printf("El libro Juego de Tronos tiene %i paginas.\n", CR.paginas);
	printf("El nombre del libro es %s.\n", CR.nombre);
	printf("El precio del libro Juego de Tronos es %f.\n\n", CR.precio);
	
	system("pause");
	return 0;
}

