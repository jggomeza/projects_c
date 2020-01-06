// Bloque 5.4.1:

// Hacer una matriz y mostrarla por pantalla.

#include<stdio.h>

void llena_matriz(int matriz[][5]);
void imprime_matriz(int matriz[][5]);
	
int main(){
	
	int matriz[5][5];
	
	llena_matriz(matriz);
	imprime_matriz(matriz);
	
	system("pause");
	return 0;
}

void llena_matriz(int matriz[][5]){
	int i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			matriz[i][j] = rand() % 10; // Números aleatorios entre 0 y 9
		}
	}

}
	
void imprime_matriz(int matriz[][5]){
	int i, j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
