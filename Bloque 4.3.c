// Bloque 4.3:

// Hacer con funciones de tipo void el factorial de un número.

#include <stdio.h>

void factorial();

int main(){
	
	factorial();
		
	system("pause");
	return 0;
}

void factorial(){
	int x, i;
	double fact = 1;
	
	
	printf("Introduzca un número entero para calcular su Factorial: ");
	scanf("%i", &x);
	
	for(i = 1; i <= x; i++){
		fact *= i;
	}
	
	printf("El Factorial de %i es %f.\n\n", x, fact);
}
