// Bloque 5.6.1:

// Acceder a un elemento de un String.

#include<stdio.h>
#include<string.h>

void cambio(char c1[]);

int main(){
	
	char c1[10];
	
	printf("Introduzca una frase: ");
	fgets(c1, 10, stdin); // Esta es la función más recomendada para usar
	
	cambio(c1);
	
	printf("%s\n ", c1);
	
	system("pause");
	return 0;
}

void cambio(char c1[]){
	int i;
	
	for(i = 0; i < 10; i++){
		if(c1[i] == '\n'){
			c1[i] = '\0';
		}
	}
}
