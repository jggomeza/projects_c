// Bloque 2.1: Estructuras Selectivas

/* Declaramos una variable entera y la inicializamos con un valor entre 1 y 10, 
   teclado solicitamos un número y vemos sí hemos acertado */

#include<stdio.h>

int main(){
	int x, num;
	
	x = 4;
	
	printf("Introduzca un número: ");
	scanf("%i", &num);
	
	if(num == x){ // "==" "<" "<=" ">" ">=" "!="
		printf("Felicitaciones has acertado!\n");
	}
	else{
		printf("Lo siento, vuelve a intentarlo!\n");
	}

	
	system("pause");
	return 0;
}
