// Bloque 3.3.2:

// Escriba un programa que lea dos n�meros y muestre por pantalla todod los n�meros
// comprendidos entre esos n�meros dados.

#include<stdio.h>

int main(){
	int i = 10, num1, num2;
	
	do{
		printf("Introduzca un n�mero entero: ");
		scanf("%i", &num1);
		
		printf("Introduzca otro n�mero mayor al anterior: ");
		scanf("%i", &num2);
		
		if(num1 >= num2){
			printf("\nLos n�meros introducidos son herroneos, vuelva a intentarlo!\n\n");
			system("pause");
			system("cls");
		}
	}while(num1 >= num2);
	
	for(i = num1 + 1; i < num2; i++){
		printf("%i, ", i);
	}
	
	
	system("pause");
	return 0;
}
