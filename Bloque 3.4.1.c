// Bloque 3.4.1:

// Hacer las tablas de multiplicar del 1 al 9

#include<stdio.h>

int main(){
	int i, j;
	
	// Inicio de las tablas de multiplicar.
	
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 10; j++){
			printf("%i x %i = %i\n", i, j, i*j);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
