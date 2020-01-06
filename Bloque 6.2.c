// Bloque 6.2.1: Formulario con registro.

#include<stdio.h>
#include<string.h>

typedef struct{
	char nombre[50];
	char empleo[50];
	int edad;	
}reg;

int main(){
	reg for1, for2;
	
	printf("Introduce valores para el formulario 1:\n");
	printf("Introduce tu nombre: ");
	fgets(for1.nombre, 50, stdin);
	
	printf("Introduce tu empleo: ");
	fflush(stdin);
	fgets(for1.empleo, 50, stdin);
	
	printf("Introduce tu edad: ");
	scanf("%i", &for1.edad);
	
	printf("Introduce valores para el formulario 2:\n");
	printf("Introduce tu nombre: ");
	fflush(stdin);
	fgets(for2.nombre, 50, stdin);
	
	printf("Introduce tu empleo: ");
	fflush(stdin);
	fgets(for2.empleo, 50, stdin);
	
	printf("Introduce tu edad: ");
	scanf("%i", &for2.edad);
	
	printf("Los valores son:\n");
	printf("El nombre de for1 es: %s", for1.nombre);
	printf("El nombre de for2 es: %s", for2.nombre);
	
	printf("El empleo de for1 es: %s", for1.empleo);
	printf("El empleo de for2 es: %s", for2.empleo);
	
	printf("La edad de for1 es: %i\n", for1.edad);
	printf("La edad de for2 es: %i\n", for2.edad);
	
	system("pause");
	return 0;
}

