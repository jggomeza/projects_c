// Bloque 5.5.1:

// Introducir una frase como cadena de caracteres  (Strings).

#include<stdio.h>

int main(){
	
	char cadena[13]; // Hola que tal
	
	printf("Introduce una frase: ");
	// scanf("%s", &cadena); // corta la frase donde encuentra el primer espacio
	// gets(cadena); toma mas caracteres que los que se han definido y colapsa la memoria
	fgets(cadena, 13, stdin); // Esta es la función más recomendada para usar
	
	printf("%s\n\n", cadena);
	
	system("pause");
	return 0;
}

