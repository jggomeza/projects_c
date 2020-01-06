// Bloque 2.2.1: Ampliación Estructuras Selectivas

// Ejercicio: Realizar un programa que lea de la entrada estandar un número entero positivo y
// escriba en la salida estandar sí es par o impar

#include<stdio.h>

int main(){
	int num, resto;
	
	printf("Introduzca un número entero: ");
	scanf("%i", &num);
	
	resto = num % 2;
	
	if(resto == 0){
		printf("El número %i es un número par!\n", num);
	}
	else{
		printf("El número %i es un número impar!\n", num);
	}
		
	system("pause");
	return 0;
}
