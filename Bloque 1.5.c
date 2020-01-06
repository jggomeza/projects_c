// Bloque 1.5: Ampliacion de conocimientos

#include<stdio.h>
#include<math.h>

int main(){
	int x, y;
	
	x = 10;
	y = 2;
	
	// Operaciones básicas
	
	x += y; // Sumar	
	printf("El valor de x + y es %i.\n", x);
	
	x = x - y; // Restar
	printf("El valor de x - y es %i.\n", x);
	
	x = x * y; // Multiplicar
	printf("El valor de x * y es %i.\n", x);
	
	x = x / y; // Dividir	
	printf("El valor de x / y es %i.\n", x);
	
//	x = x % y; // Modulo o resto	
//	printf("El valor de x % y es %i.\n", x);
	
	x = pow(y, x); // Potencia de y^x	
	printf("El valor de y^x es %i.\n", x);
	
	x = sqrt(x); // Raíz Cuadrada	
	printf("El valor de la raiz de x es %i.\n", x);
	
	// Operadores de incremento:
	
	x++;
	printf("El valor de x++ es %i.\n", x);
	
	x--;
	printf("El valor de x-- es %i.\n", x);
	
	system("pause");
	return 0;
}

