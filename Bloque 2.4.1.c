// Bloque 2.4.1:

// Hacer un programa que diga si el n�mero insertado por teclado se encuentre entre 1 y 10
// o s� no lo esta.

#include<stdio.h>

int main(){
	int num;
	
	printf("Introduzca un n�mero: ");
	scanf("%i", &num);
	
	if(num >= 1 && num <= 10){ // Y && significa que se tienen que cumplir las dos condiciones y entonces entra.
		printf("El n�mero %i esta entre 1 y 10.\n", num);
	}
	else{
		printf("El n�mero %i no esta entre 1 y 10.\n", num);	
	}
	
	system("pause");
	return 0;
}
