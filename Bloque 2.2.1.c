// Bloque 2.2.1: Ampliaci�n Estructuras Selectivas

// Ejercicio: Realizar un programa que lea de la entrada estandar un n�mero entero positivo y
// escriba en la salida estandar s� es par o impar

#include<stdio.h>

int main(){
	int num, resto;
	
	printf("Introduzca un n�mero entero: ");
	scanf("%i", &num);
	
	resto = num % 2;
	
	if(resto == 0){
		printf("El n�mero %i es un n�mero par!\n", num);
	}
	else{
		printf("El n�mero %i es un n�mero impar!\n", num);
	}
		
	system("pause");
	return 0;
}
