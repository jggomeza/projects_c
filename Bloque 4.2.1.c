// Bloque 4.2.1:

// Calcular el Factorial de dos números con una función.

#include <stdio.h>

int factorial(int a);

int main(){
	int x, y;
	double fact_1, fact_2;
	
	
	printf("Introduzca el primer número entero para calcular su Factorial: ");
	scanf("%i", &x);
	
	printf("Introduzca el segundo número entero para calcular su Factorial: ");
	scanf("%i", &y);
	
	fact_1 = factorial(x);
	fact_2 = factorial(y);
	
	printf("El Factorial de %i es %f.\nEl Factorial de %i es %f.\n\n", x, fact_1, y, fact_2);
		
	system("pause");
	return 0;
}

int factorial(int a){
	int i;
	double fact = 1;
	
	for(i = 1; i <= a; i++){
		fact *= i;
	}
	return fact;
}
