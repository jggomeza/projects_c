// Bloque 5.4.2:

// Hacer un programa que compare dos matrices.

#include<stdio.h>

void llena_matriz(int matriz[][2]);
void imprime_matriz(int matriz[][2]);
void compara_matriz(int m1[][2], int m2[][2]);

int main(){
	
	int m1[2][2];
	int m2[2][2];
		
	llena_matriz(m1);
	imprime_matriz(m1);
	llena_matriz(m2);
	imprime_matriz(m2);
	compara_matriz(m1, m2);
	
	system("pause");
	return 0;
}

void llena_matriz(int m[][2]){
	int i, j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Introduzca un valor para la posición [%i][%i]: ", i + 1, j + 1);
			scanf("%i", &m[i][j]);
		}
	}
	printf("\n");
}

void imprime_matriz(int m[][2]){
	int i, j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%i ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void compara_matriz(int m1[][2], int m2[][2]){
	int i, j, aux = 0;
	
	for(i = 0; i < 2 && aux == 0; i++){
		for(j = 0; j < 2 && aux == 0; j++){
			if(m1[i][j] != m2[i][j]){
				aux = 1;	
			}
		}
	}
	
	if(aux == 0){
		printf("Ambas matrices son iguales!.\n\n");
	}
	else{
		printf("Ambas matrices no son iguales!.\n\n");
	}
}
