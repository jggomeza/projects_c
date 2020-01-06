// Bloque 2.2.2: Ampliación Estructuras Selectivas

// Realiza un programa que lea tres números enteros positivos, determine e imprima el
// mayor y el menor valor de los tres. Intente que el programa realize el menor número de
// comparaciones posibles entre los números.

#include<stdio.h>

int main(){
	int num1, num2, num3;
	int max, min = 0;
	
	printf("Intruduzca un número entero: ");
	scanf("%i", &num1);
	
	printf("Intruduzca otro número entero: ");
	scanf("%i", &num2);
	
	printf("Intruduzca otro número entero: ");
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
	
	printf("El número mayor es %i y el menor es %i.\n", max, min);
	
	system("pause");
	return 0;
}
