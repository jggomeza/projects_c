// Bloque 1.4: Operaciones con Variables

#include<stdio.h>
#define PI 3.1416

int main(){
	float x;
	int y;
	
	x = PI;
	printf("El valor de x es %f.\n\n",x);
	
	printf("Introduce un valor para y: ");
	scanf("%i", &y);
	
	printf("El valor de y es %i.\n", y);
	
	x = x * y;
	
	printf("El valor de x es %f.\n\n", x);
	
	system("pause");
	return 0;
}

