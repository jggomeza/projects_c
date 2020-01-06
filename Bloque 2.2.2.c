// Bloque 2.2.2: Ampliaci�n Estructuras Selectivas

// Realiza un programa que lea tres n�meros enteros positivos, determine e imprima el
// mayor y el menor valor de los tres. Intente que el programa realize el menor n�mero de
// comparaciones posibles entre los n�meros.

#include<stdio.h>

int main(){
	int num1, num2, num3;
	int max, min = 0;
	
	printf("Intruduzca un n�mero entero: ");
	scanf("%i", &num1);
	
	printf("Intruduzca otro n�mero entero: ");
	scanf("%i", &num2);
	
	printf("Intruduzca otro n�mero entero: ");
	scanf("%i", &num3);
	
	// Inicio de las comparaciones
	
	if(num1 > num2){
		if(num1 > num3){
			max = num1;
			
			//  Determinar el menor
			if(num2 < num3){
				min = num2;
			}
			else{
				min = num3;
			}
		}
		else{
			max = num3;
			min = num2;
		}
	}
	else if(num2 > num3){
		max = num2;
		
		//  Determinar el menor
		if(num1 < num3){
			min = num1;
		}
		else{
			min = num3;
		}
	}
	else{
		max = num3;
		min = num1;
	}
	
	printf("El n�mero mayor es %i y el menor es %i.\n", max, min);
	
	system("pause");
	return 0;
}
