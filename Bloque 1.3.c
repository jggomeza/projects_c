// Bloque 1.3: Variables

#include<stdio.h>

int main(){
	int x; // Entera: 8, -9, 10 (16bits) -32768 hasta 32768 2^16
	float y; // Flotante: 9.58, 10.69, 5 (16bits) 2^32
	double y2; // Flotante: 64bits 2^64
	char z; // Caracter: a, 4
	
	x = 5;
	y = 10.5;
	y2 = 20.9;
	z = 'a';
	
	printf("El valor de x es %i.\n",x);
	printf("El valor de y es %f.\n",y);
	printf("El valor de y2 es %f.\n",y2);
	printf("El valor de z es %c.\n",z);

	printf("\n");

	printf("El valor de x es %i.\nEl valor de y es %f.\nEl valor de y2 es %f.\nEl valor de z es %c.\n", x, y, y2, z);
	
	system("pause");
	return 0;
}

