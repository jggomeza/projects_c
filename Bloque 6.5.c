// Bloque 7.1:

// Realizar un programa para almacenar las notas de un alumno y las asignaturas de un trimestre.

#include<stdio.h>

typedef struct{
	int matematicas;
	int ingles;
	int fisica;
}calificaciones;

void darnotas(calificaciones *nota);

int main(){
	calificaciones nota;
	
	darnotas(&nota);
	
	printf("La nota de Matematica es %i.\n", nota.matematicas);
	printf("La nota de Ingles es %i.\n", nota.ingles);
	printf("La nota de Fisica es %i.\n", nota.fisica);
	
	system("pause");
	return 0;
}

void darnotas(calificaciones *nota){
	printf("Introduzca la nota de Matematicas: ");
	scanf("%i", &nota->matematicas);
	
	printf("Introduzca la nota de Ingles: ");
	scanf("%i", &nota->ingles);
	
	printf("Introduzca la nota de Fisica: ");
	scanf("%i", &nota->fisica);
	
	printf("La nota de Matematica es %i.\n", (*nota).matematicas);
	printf("La nota de Ingles es %i.\n", nota->ingles);
	printf("La nota de Fisica es %i.\n", (*nota).fisica);
}
