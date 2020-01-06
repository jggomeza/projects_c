// Comprobar que dos matrices dinamicas son iguales con una funcion

#include <stdio.h>
#include <stdlib.h>

int reservar(int filas, int column);
void introduce(int filas, int column, int **mat);
void comparar(int filas, int column, int **m1, int **m2);

int main(){
	int filas, column;
	int **m1, **m2;
	
	printf("Introduzaca el numero de filas: ");
	scanf("%i", &filas);
	
	printf("Introduzaca el numero de columnas: ");
	scanf("%i", &column);
	
	m1 = reservar(filas, column);
	m2 = reservar(filas, column);
	
	introduce(filas, column, m1);
	introduce(filas, column, m2);
	
	comparar(filas, column, m1, m2);
	
	free(m1);
	free(m2);
	
	system("pause");
	return 0;
}

int reservar(int filas, int column){
	int **mat;
	int i;
	
	mat = (int**)malloc(filas*sizeof(int*));
	
	if(mat == NULL){
		printf("No se ha podido reservar memoria!.\n");
		exit(1);
	}
	
	for(i = 0; i < filas; i++){
		mat[i] = (int*)malloc(column*sizeof(int));
		
		if(mat == NULL){
			printf("No se ha podido reservar memoria!.\n");
			exit(1);
		}
	}
	
	return mat;
	free(mat);
}

void introduce(int filas, int column, int **mat){
	int i, j;
	
	for(i = 0; i < filas; i++){
		for(j = 0; j < filas; j++){
			printf("Introduce el valor para el elemento [%i][%i]: ", i, j);
			scanf("%i", &mat[i][j]);
		}
	}
}

void comparar(int filas, int column, int **m1, int **m2){
	int i, j, aux = 0;
	
	for(i = 0; i < filas && aux == 0; i++){
		for(j = 0; j < filas && aux == 0; j++){
			if(m1[i][j] != m2[i][j]){
				aux = 1;				
			}
		}
	}
	
	if(aux == 0){
		printf("Ambas matrices SI son iguales!.\n");
	}
	else{
		printf("Ambas matrices NO son iguales!.\n");
	}
}
