// Bloque 3.5:

// Escribe un programa que calcule el factorial de un número n entero positivo, leido por teclado.

#include <stdio.h>

int main(){
	int i, num, fac = 1;
	
	do{
		printf("Introduzca un número para calcular su factorial: ");
		scanf("%i", &num);
		
		if(num <= 0){
			printf("El numero que usted ha ingresado es incorrecto, por favor vuelva a intentarlo nuevamente!\n");
			system("pause");
			system("cls");
		}
		
	}while(num <= 0);
	
	for(i = 1; i <= num; i++){
		fac *= i;
	}
	
	printf("El factorial de %i es %i\n\n", num, fac);
	
	system("pause");
	return 0;
}
