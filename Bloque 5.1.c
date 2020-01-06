// Bloque 5.1:

// Darle valor a un vector de 10 enteros y leerlos despues.

#include<stdio.h>

int main(){
	int x, y, i;
	
	int v[10];
	// int v[] = {2, 5, 8, 7, 9};
	
	// printf("El valor de la posición 0 es %i.\n\n", v[0]);
	for(i = 0; i < 10; i++){
		printf("Dale valor al vector en la posición %i: ", i);
		scanf("%i", &v[i]);
	}
	
	for(i = 0; i < 10; i++){
		printf("%i, ", v[i]);
	} 
	
	system("pause");
	return 0;
}

