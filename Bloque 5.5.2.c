// Bloque 5.5.2:

// Compara dos cadenas de caracteres.

#include<stdio.h>
#include<string.h>

int main(){
	
	char cadena1[5];
	char cadena2[5];
	
	printf("Introduce la primera frase: ");
	fgets(cadena1, 5, stdin); // Esta es la función más recomendada para usar
	
	printf("Introduce la segunda frase: ");
	fflush(stdin);
	fgets(cadena2, 5, stdin); // Esta es la función más recomendada para usar
	
	if(strcmp(cadena1, cadena2) == 0){ // strcmp(a, b) compara dos strings.
		printf("Los dos Strings son iguales.\n");
	}
	else{
		printf("Los dos Strings NO son iguales.\n");
	}
	
	system("pause");
	return 0;
}
