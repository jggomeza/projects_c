// Bloque 3.1:

// Escriba un programa que lea dos números y muestre por pantalla todos los numeros
// comprendidos entre esos números dados.

#include<stdio.h>

int main(){
	int inicial, final, i;
	
	printf("Introduzca un número: ");
	scanf("%i", &inicial);
	printf("Introduzca otro número mayor al anterior: ");
	scanf("%i", &final);
	
	// Bucle For:
	for(i = inicial + 1 ; i < final; i++){
		printf("%i, ", i);
	}
	printf("\n\n");
		
	// Bucle While:
	i = inicial + 1;
	while(i < final){
		printf("%i, ", i);
		i++;
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
