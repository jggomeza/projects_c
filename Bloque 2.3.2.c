// Bloque 2.3.2:

// Realiza un programa en C que lea un número entre 1 y 4 y devuelva el día de la
// semana correspondiente. Para 1 Lunes, 2 Martes, etc.

#include<stdio.h>

int main(){
	int num;
	
	printf("Introduzca un número entero: ");
	scanf("%i", &num);
	
	switch(num){
		case 1:{
			printf("Lunes.\n");
			break;
		}
		case 2:{
			printf("Martes.\n");
			break;
		}
		case 3:{
			printf("Miercoles.\n");
			break;
		}
		case 4:{
			printf("Jueves.\n");
			break;
		}
		default: printf("El número introducido es incorrecto!\n");
	}
	
	system("pause");
	return 0;
}
