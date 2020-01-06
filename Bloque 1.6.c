// Bloque 1.6: Ordenamiento por Método Burbuja

// Intercambiar los valores de dos números enteros introducidos por teclado

#include<stdio.h>

int main(){
	int x, y, aux;
	
	printf("Introduzca un valor para x: ");
	scanf("%i", &x);
	
	printf("\nIntroduzca un valor para y: ");
	scanf("%i", &y);

	aux = x;
	x = y;
	y = aux;
	
	printf("El valor de x es %i\n",x);	
	printf("El valor de y es %i\n",y);
	
	system("pause");
	return 0;
}

