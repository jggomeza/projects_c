// Bloque 3.3.1:

// Hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos la letra a no pare.

#include<stdio.h>

int main(){
	int i = 10;
	char c;
	
	do{
		printf("Introduzca una letra: ");
		fflush(stdin); // Esta funcion sirve para vaciar el buffer y siempre hay que emplearla cuando se use char.
		scanf("%c", &c);
		
	}while(c != 's' && c != 'S');
	
	
	system("pause");
	return 0;
}
