// Bloque 2.3.1:

// Realiza un programa en C que lea un n�mero entre 1 y 4 y devuelva el d�a de la
// semana correspondiente. Para 1 Lunes, 2 Martes, etc.

#include<stdio.h>

int main(){
	int num;
	
	printf("Introduzca un n�mero entero: ");
	scanf("%i", &num);
	
	if(num == 1){
		printf("Lunes.\n");
	}
	else if(num == 2){
		printf("Martes.\n");
	}
	else if(num == 3){
		printf("Miercoles.\n");
	}
	else if(num == 4){
		printf("Jueves.\n");
	}
	
	system("pause");
	return 0;
}
