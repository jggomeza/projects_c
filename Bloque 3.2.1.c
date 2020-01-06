// Bloque 3.2.1:

// Escriba un programa que imprima la suma de los números pares entre dos y mil.

#include<stdio.h>

int main(){
	int i;
	float sum = 0;
	
	for(i = 2; i <= 1000; i += 2){
		sum += i;
	}
	
	printf("La suma de los número pares entre 2 y 1000 es igual a %f \n", sum);
	
	system("pause");
	return 0;
}
