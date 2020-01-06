// Bloque 4.4:

// Intercambia los valores de dos variable con una función;

#include<stdio.h>

void cambio(int *a, int *b);

int main(){
	int x, y;
	
	x = 5;
	y = 10;
	
	cambio(&x, &y);
	
	printf("El valor actual de x es %i y el valor actual de y es %i.\n\n", x, y);
	
	system("pause");
	return 0;
}

void cambio(int *a, int *b){ // a = &x y por tanto *a sera lo mismo que x.
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}
