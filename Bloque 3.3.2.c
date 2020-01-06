// Bloque 3.3.2:

// Escriba un programa que lea dos números y muestre por pantalla todod los números
// comprendidos entre esos números dados.

#include<stdio.h>

int main(){
	int i = 10, num1, num2;
	
	do{
		printf("Introduzca un número entero: ");
		scanf("%i", &num1);
		
		printf("Introduzca otro número mayor al anterior: ");
		scanf("%i", &num2);
		
		if(num1 >= num2){
			printf("\nLos números introducidos son herroneos, vuelva a intentarlo!\n\n");
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
