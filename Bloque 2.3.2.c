// Bloque 2.3.2:

// Realiza un programa en C que lea un n�mero entre 1 y 4 y devuelva el d�a de la
// semana correspondiente. Para 1 Lunes, 2 Martes, etc.

#include<stdio.h>

int main(){
	int num;
	
	printf("Introduzca un n�mero entero: ");
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
		default: printf("El n�mero introducido es incorrecto!\n");
	}
	
	system("pause");
	return 0;
}
