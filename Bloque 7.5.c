// Realizar un programa que copie el contenido de una matriz en otra y todo de manera dinamica

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int filas, column;
	int **m1, **m2;
	int i, j, k;
	
	printf("Introduzca el numero de filas:");
	scanf("%i", &filas);
	
	printf("Introduzca el numero de columnas:");
	scanf("%i", &column);
	
	m1 = (int**)malloc(filas*sizeof(int*));
	
	if(m1 == NULL){
		printf("No se ha podido reservar espacio de memoria.\n");
		exit(1);
	}
	
	for(i = 0; i < filas; i++){
		m1[i] = (int*)malloc(column*sizeof(int));
		
		if(m1[i] == NULL){
			printf("No se ha podido reservar espacio de memoria.\n");
			exit(1);
		}
	}
	
	// Llenamos la matriz 1 con numeros aleatorios entre 0 y 10
	srand(time(NULL));
	
	for(i = 0; i < filas; i++){
		for(j = 0; j < column; j++){
			m1[i][j] = rand() % 100;
		}
	}
	
	m2 = (int**)malloc(filas*sizeof(int*));
	
	if(m2 == NULL){
		printf("No se ha podido reservar espacio de memoria.\n");
		exit(1);
	}
	
	for(i = 0; i < filas; i++){
		m2[i] = (int*)malloc(column*sizeof(int));
		
		if(m2[i] == NULL){
			printf("No se ha podido reservar espacio de memoria.\n");
			exit(1);
		}
	}
	
	// Copiamos la matriz 1 en la 2
	for(i = 0; i < filas; i++){
		for(j = 0; j < column; j++){
			m2[i][j] = m1[i][j];
		}
	}	
	
	printf("\n\n");
	printf("Matriz No 1:\n");
	for(k = 0; k < column*4; k++){
		printf("-");
	}
	printf("\n\n\n");
	
	// Comienzo de la impresion de la matriz 1
	for(i = 0; i < filas; i++){
		for(j = 0; j < column; j++){
			if(j < column-1){
				printf(" %02i|", m1[i][j]);
			}
			else{
				printf(" %02i", m1[i][j]);
			}
		}
		printf("\n");
		for(k = 0; k < column*4; k++){
			if(i < filas-1){
				printf("-");
			}
		}
		printf("\n");
	}
	
	printf("Matriz No 2:\n");
	for(k = 0; k < column*4; k++){
		printf("-");
	}
	printf("\n\n\n");
	
	// Comienzo de la impresion de la matriz 2
	for(i = 0; i < filas; i++){
		for(j = 0; j < column; j++){
			if(j < column-1){
				printf(" %02i|", m2[i][j]);
			}
			else{
				printf(" %02i", m2[i][j]);
			}
		}
		printf("\n");
		for(k = 0; k < column*4; k++){
			if(i < filas-1){
				printf("-");
			}
		}
		printf("\n");
	}
	
	free(m1);
	free(m2);
	
	system("pause");
	return 0;
}

