// Bloque 4.1:

// Calcular el número mayor entre dos números con una función.

#include <stdio.h>

int maximo();

int main(){
	int x, y, max;
	
	x = 30;
	y = 10;
	
	max = maximo(x, y);	
	
	// printf("El valor en main de x es %i y el valor de y es %i.\n\n", x, y);
	printf("El valor maximo es %i.\n\n", max);
	
	system("pause");
	return 0;
}

int maximo(int a, int b){ // a = x; b = y;
	int aux;
	
	if(a > b){
		aux = a;
	}
	else{
		aux = b;
	}
	// printf("El valor de x es %i y el valor de y es %i.\n\n", a, b);
	
	// a = 8;
	// b = 5;
	
	// printf("El valor de x es %i y el valor de y es %i.\n\n", a, b);
	
	return aux;
}
